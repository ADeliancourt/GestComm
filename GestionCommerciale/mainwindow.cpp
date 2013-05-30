#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTextCodec>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QDate>
#include <QDebug>
#include "dialonewclient.h"
#include "ui_dialonewclient.h"
#include <QSqlError>
#include <QScrollArea>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //connexion
    baseCommerciale=QSqlDatabase::addDatabase("QMYSQL");
    baseCommerciale.setHostName("localhost");
    baseCommerciale.setUserName("root");
    baseCommerciale.setPassword("ar3f9b");
    baseCommerciale.setDatabaseName("Panier");
    if(!baseCommerciale.open())
    {
        QMessageBox::warning(this,this->windowTitle(),"Le serveur de base de données est inaccessible \r\n Merci de contacter votre administrateur et de relancer l'application \r\n après avoir réglé le problème");
    }
    else
    {
    ui->statusBar->setStatusTip("Connexion à la base réussite");
    on_action_Produit_triggered();
    }
    //model
  //  modelProduits=new modelTableProduit(this);
    modelProduits->setTable("Produit");
    //on associe le client à sa base
    modelClient=new QSqlTableModel(this);
    modelClient->setTable("Client");
    modelClient->setEditStrategy(QSqlTableModel::OnRowChange);
    //on interroge la bdd
    modelClient->select();
    modelProduits->select();

    ui->tableViewCatalogue->setModel(modelProduits);
    ui->tableViewCatalogue->resizeColumnsToContents();
    ui->tableViewCatalogue->resizeRowsToContents();

    modelRecherche.setQuery("select * from Client");
    ui->tableViewRecherche->setModel(&modelRecherche);
    ui->tableViewRecherche->resizeColumnsToContents();
    ui->tableViewRecherche->resizeRowsToContents();
    //les connexions des signaux aux slots correspondants
    connect(ui->lineEditId,SIGNAL(textChanged(QString)),this,SLOT(rechercheClient()));
    connect(ui->lineEditNom,SIGNAL(textChanged(QString)),this,SLOT(rechercheClient()));
    connect(ui->lineEditPrenom,SIGNAL(textChanged(QString)),this,SLOT(rechercheClient()));
    connect(ui->lineEditVille,SIGNAL(textChanged(QString)),this,SLOT(rechercheClient()));
    connect(ui->lineEditCP,SIGNAL(textChanged(QString)),this,SLOT(rechercheClient()));
    ui->comboBoxDesignation->setModel(modelProduits);
    ui->comboBoxDesignation->setModelColumn(1);
    ui->dateEditCommande->setDate(QDate::currentDate());
    QSqlQuery req("Select ifnull (max(numCom)+1,1) from Commande");
    req.first();
    QString numComMax=req.value(0).toString();
    ui->labelCommande->setText(numComMax);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_action_Quitter_triggered()
{
    if(QMessageBox::question(this,this->windowTitle(),tr("Êtes-vous sûr de vouloir quitter l'application ?"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Cancel)==QMessageBox::Ok)
    {
        close();
    }
}


void MainWindow::on_action_Produit_triggered()
{
modelProduits = new QSqlRelationalTableModel(this,baseCommerciale);
modelProduits->setTable("Produit");
modelProduits->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
modelProduits->select();
modelProduits->setHeaderData(0, Qt::Horizontal, tr("Référence"));
modelProduits->setHeaderData(1, Qt::Horizontal, tr("Designation"));
modelProduits->setHeaderData(2, Qt::Horizontal, tr("Prix unitaire"));
modelProduits->setHeaderData(3, Qt::Horizontal, tr("Quantité en stock"));
modelProduits->setHeaderData(4, Qt::Horizontal, tr("Image"));
ui->tableViewCatalogue->setModel(modelProduits);
ui->tableViewCatalogue->show();
ui->tabWidget->setCurrentIndex(0);
ui->tableViewCatalogue->resizeColumnsToContents();
}

void MainWindow::on_pushButtonAjoutProd_clicked()
{
    QSqlRecord newProd;
    modelProduits->insertRecord(-1,newProd);
    QSqlQuery maRequete("select max(refProd)+1 from Produit");
    maRequete.next();
    int numeroProdOk=maRequete.value(0).toInt();
    newProd.setValue("refProd",numeroProdOk);
}

void MainWindow::on_pushButtonSupprProd_clicked()
{
    int noLineSelect=ui->tableViewCatalogue->selectionModel()->currentIndex().row();
    modelProduits->removeRow(noLineSelect);
}

void MainWindow::on_action_Commande_triggered()
{
    ui->dateEditCommande->date();
    QSqlRecord newCom;
    QSqlQuery maRequete("select max(numCom)+1 from Commande");
    maRequete.next();
    int numeroComOk=maRequete.value(0).toInt();
    newCom.setValue("numCom",numeroComOk);
    //connect(ui->lineEditNomCli,SIGNAL(textChanged(QString)),this,SLOT(rechercherClient);
}

void MainWindow::on_pushButton_clicked()
{
    //ouverture de la popup "Nouveau client"
    DialoNewClient * formNewCli=new DialoNewClient(this);

    if(formNewCli->exec()==QDialog::Accepted)
    {
        qDebug()<<"Ajout d'un nouveau client";
        //enregistrement du newCli
        QSqlRecord recordClient=modelClient->record();

        recordClient.setValue("numCli",formNewCli->ui->lineEditIdNewCli->text().toInt());
        recordClient.setValue("nomCli",formNewCli->ui->lineEditNomNewCli->text());
        recordClient.setValue("prenomCli",formNewCli->ui->lineEditPrenomNewCli->text());
        recordClient.setValue("rueCli",formNewCli->ui->lineEditAdrNewCli->text());
        recordClient.setValue("villeCli",formNewCli->ui->lineEditVilleNewCli->text());
        recordClient.setValue("CPCli",formNewCli->ui->lineEditCPNewCli->text());
        recordClient.setValue("telCli",formNewCli->ui->lineEditTelNewCli->text());
        recordClient.setValue("mailCli",formNewCli->ui->lineEditMelNewCli->text());
        if (modelClient->insertRecord(-1,recordClient))
        {
            ui->statusBar->showMessage("Client ajouté avec succés",3000);
            modelClient->submit();
            ui->lineEditId->setText(formNewCli->ui->lineEditIdNewCli->text());
        }
        else
        {
            //QString erreurSql=Panier.lastError().
        }
    }
    else
    {
        qDebug()<<"Pas d'ajout";
    }
}
void MainWindow::rechercheClient()
{
    //qDebug()<<"void MainWindow::rechercherClient()";
    QString where="";
    QStringList listeRestrictions;
    //ID
    if(ui->lineEditId->text()!="")
    {
        listeRestrictions.append(" numCli = "+ui->lineEditId->text());
    }
    //Nom
    if(ui->lineEditNom->text()!="")
    {
        listeRestrictions.append(" nomCli like '%"+ui->lineEditNom->text()+"%'");
    }
    //Prenom
    if(ui->lineEditPrenom->text()!="")
    {
        listeRestrictions.append(" prenomCli like '%"+ui->lineEditPrenom->text()+"%'");
    }
    //Ville
    if(ui->lineEditVille->text()!="")
    {
        listeRestrictions.append(" villeCli like '%"+ui->lineEditVille->text()+"%'");
    }
    //Code Postal
    if(ui->lineEditCP->text()!="")
    {
        listeRestrictions.append(" CPCli like '%"+ui->lineEditCP->text()+"%'");
    }
    if(listeRestrictions.count()>0)
    {
        where="where "+listeRestrictions.join(" and ");

    }
    QString texteReq="select * from Client "+where;
    qDebug()<<texteReq;
    modelRecherche.setQuery(texteReq);
}

void MainWindow::on_pushButtonAjoutPanierProd_clicked()
{
    modelPanier=new QSqlTableModel(this);
    modelPanier->setTable("LigneCommande");
    ui->tableWidgetPanier->resizeColumnsToContents();
    ui->tableWidgetPanier->insertRow(ui->tableWidgetPanier->rowCount());
    //no
    ui->comboBoxDesignation->setModelColumn(0);
    QTableWidgetItem * itemNumProd=new QTableWidgetItem(ui->comboBoxDesignation->currentText());
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,0,itemNumProd);
    //desi
    ui->comboBoxDesignation->setModelColumn(1);
    QTableWidgetItem * itemDesProd=new QTableWidgetItem(ui->comboBoxDesignation->currentText());
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,1,itemDesProd);
    //QTT
    QTableWidgetItem * itemQTTProd=new QTableWidgetItem(QString::number(ui->spinBoxQtt->value()));
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,2,itemQTTProd);
    //PU
    ui->comboBoxDesignation->setModelColumn(2);
    QTableWidgetItem * itemPUProd=new QTableWidgetItem(ui->comboBoxDesignation->currentText());
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,3,itemPUProd);
    ui->comboBoxDesignation->setModelColumn(1);
}

void MainWindow::on_pushButtonSupprimer_clicked()
{
    //qDebug()<<"void MainWindow::on_pushButtonSupprimer_clicked()";
    int noLineSelect=ui->tableWidgetPanier->currentRow();
    ui->tableWidgetPanier->removeRow(noLineSelect);
}

void MainWindow::on_pushButtonEnregistrer_clicked()
{
    /*QSqlQuery reqCommande;
    reqCommande.prepare("INSERT INTO Commande(numCom,dateCom,numCli) values (:nu,:date,:cli)");
    reqCommande.bindValue(":no",ui->labelCommande->text());
    reqCommande.bindValue(":date",ui->dateEditCommande->text());
    QModelIndex index=ui->tableViewRecherche->selectionModel()->currentIndex();
    int noLigne=ui->tableViewRecherche->selectionModel()->currentIndex().row();
    index=index.sibling(noLigne,0);
    QVariant numeroClient=index.data();

    reqCommande.bindValue(":cli", numeroClient);
    if(reqCommande.exec())
    {
        statusBar()->showMessage("La commande est enregistrée", 1500);
        //lignes de commande
        for(int noLigne=0;noLigne<ui->tableWidgetPanier->rowCount();noLigne++)
        {
            QSqlQuery reqInsLDC
        }
    }*/

    QStringList listeValues;
    QModelIndex index=ui->tableViewRecherche->selectionModel()->currentIndex();
    int noLigne=ui->tableViewRecherche->selectionModel()->currentIndex().row();
    index=index.sibling(noLigne,0);
    QVariant numeroClient=index.data();

    listeValues.append(numeroClient.toString());

    QString reqCommande="INSERT INTO Commande(numCom,dateCom,numCli) values ("+listeValues.join(",")+")";

}
