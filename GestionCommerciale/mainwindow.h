#ifndef  MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQueryModel>
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    //le modèle de données associées aux produits
    QSqlTableModel * modelProduits;
    QSqlTableModel * modelPanier;
    QSqlTableModel * modelClient;
    QSqlTableModel * modelRechProd;
    QSqlQueryModel   modelRecherche;
    QSqlDatabase     baseCommerciale;


private slots:
    void on_pushButtonEnregistrer_clicked();
    void on_pushButtonSupprimer_clicked();
    void on_pushButtonAjoutPanierProd_clicked();
    void on_pushButton_clicked();
    void on_action_Commande_triggered();
    void on_pushButtonSupprProd_clicked();
    void on_pushButtonAjoutProd_clicked();
    void on_action_Produit_triggered();
    void on_action_Quitter_triggered();
    void rechercheClient();
};

#endif // MAINWINDOW_H
