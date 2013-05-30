/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 24 11:00:17 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quitter;
    QAction *action_Client_le;
    QAction *action_Produit;
    QAction *action_Commande;
    QAction *action_A_propos;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QTableView *tableViewCatalogue;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAjoutProd;
    QPushButton *pushButtonSupprProd;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *labelCommande;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_6;
    QDateEdit *dateEditCommande;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_13;
    QFrame *lineClient;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEditId;
    QLineEdit *lineEditCP;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditVille;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEditPrenom;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_14;
    QFrame *lineResultat;
    QLabel *label_10;
    QTableView *tableViewRecherche;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_15;
    QFrame *lineProduit;
    QLabel *label_13;
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetPanier;
    QPushButton *pushButtonSupprimer;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelTotal;
    QLabel *labelEuro;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonAjoutPanierProd;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_15;
    QSpinBox *spinBoxQtt;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QComboBox *comboBoxDesignation;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QMenu *menu_Gestion;
    QMenu *menu_Aide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(759, 711);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        action_Client_le = new QAction(MainWindow);
        action_Client_le->setObjectName(QString::fromUtf8("action_Client_le"));
        action_Produit = new QAction(MainWindow);
        action_Produit->setObjectName(QString::fromUtf8("action_Produit"));
        action_Commande = new QAction(MainWindow);
        action_Commande->setObjectName(QString::fromUtf8("action_Commande"));
        action_A_propos = new QAction(MainWindow);
        action_A_propos->setObjectName(QString::fromUtf8("action_A_propos"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 731, 651));
        tabWidget->setMinimumSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(226, 226, 226, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(113, 113, 113, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(151, 151, 151, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tabWidget->setPalette(palette);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        tableViewCatalogue = new QTableView(tab);
        tableViewCatalogue->setObjectName(QString::fromUtf8("tableViewCatalogue"));
        tableViewCatalogue->setTabKeyNavigation(false);
        tableViewCatalogue->setAlternatingRowColors(true);
        tableViewCatalogue->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableViewCatalogue);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAjoutProd = new QPushButton(tab);
        pushButtonAjoutProd->setObjectName(QString::fromUtf8("pushButtonAjoutProd"));

        horizontalLayout->addWidget(pushButtonAjoutProd);

        pushButtonSupprProd = new QPushButton(tab);
        pushButtonSupprProd->setObjectName(QString::fromUtf8("pushButtonSupprProd"));

        horizontalLayout->addWidget(pushButtonSupprProd);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 15, 611, 570));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        labelCommande = new QLabel(widget);
        labelCommande->setObjectName(QString::fromUtf8("labelCommande"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        labelCommande->setFont(font1);

        gridLayout_2->addWidget(labelCommande, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(397, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        dateEditCommande = new QDateEdit(widget);
        dateEditCommande->setObjectName(QString::fromUtf8("dateEditCommande"));
        dateEditCommande->setEnabled(true);
        dateEditCommande->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(true);
        dateEditCommande->setFont(font2);
        dateEditCommande->setCursor(QCursor(Qt::PointingHandCursor));
        dateEditCommande->setDateTime(QDateTime(QDate(2013, 4, 12), QTime(22, 0, 0)));
        dateEditCommande->setCurrentSection(QDateTimeEdit::MonthSection);
        dateEditCommande->setCalendarPopup(true);
        dateEditCommande->setCurrentSectionIndex(1);
        dateEditCommande->setTimeSpec(Qt::UTC);
        dateEditCommande->setDate(QDate(2013, 4, 12));

        gridLayout_2->addWidget(dateEditCommande, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(400, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        lineClient = new QFrame(widget);
        lineClient->setObjectName(QString::fromUtf8("lineClient"));
        lineClient->setMinimumSize(QSize(0, 0));
        lineClient->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        lineClient->setFont(font3);
        lineClient->setFrameShadow(QFrame::Raised);
        lineClient->setLineWidth(2);
        lineClient->setFrameShape(QFrame::HLine);

        verticalLayout_13->addWidget(lineClient);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Bitstream Charter"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        label_7->setFont(font4);

        verticalLayout_13->addWidget(label_7);


        verticalLayout_11->addLayout(verticalLayout_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lineEditId = new QLineEdit(widget);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));
        lineEditId->setMaximumSize(QSize(75, 16777215));

        verticalLayout_5->addWidget(lineEditId);

        lineEditCP = new QLineEdit(widget);
        lineEditCP->setObjectName(QString::fromUtf8("lineEditCP"));
        lineEditCP->setMaximumSize(QSize(75, 16777215));

        verticalLayout_5->addWidget(lineEditCP);


        horizontalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lineEditNom = new QLineEdit(widget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        verticalLayout_9->addWidget(lineEditNom);

        lineEditVille = new QLineEdit(widget);
        lineEditVille->setObjectName(QString::fromUtf8("lineEditVille"));

        verticalLayout_9->addWidget(lineEditVille);


        horizontalLayout_5->addLayout(verticalLayout_9);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        lineEditPrenom = new QLineEdit(widget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        verticalLayout_10->addWidget(lineEditPrenom);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/home/etudiant/GestionCommerciale/Ressources/Ressources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(20, 20));

        verticalLayout_10->addWidget(pushButton);


        horizontalLayout_4->addLayout(verticalLayout_10);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_11->addLayout(horizontalLayout_7);


        verticalLayout_7->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        lineResultat = new QFrame(widget);
        lineResultat->setObjectName(QString::fromUtf8("lineResultat"));
        lineResultat->setEnabled(true);
        lineResultat->setMinimumSize(QSize(0, 0));
        lineResultat->setMaximumSize(QSize(16777215, 16777215));
        lineResultat->setFont(font3);
        lineResultat->setFrameShadow(QFrame::Raised);
        lineResultat->setLineWidth(2);
        lineResultat->setFrameShape(QFrame::HLine);

        verticalLayout_14->addWidget(lineResultat);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font4);

        verticalLayout_14->addWidget(label_10);


        verticalLayout_12->addLayout(verticalLayout_14);

        tableViewRecherche = new QTableView(widget);
        tableViewRecherche->setObjectName(QString::fromUtf8("tableViewRecherche"));
        tableViewRecherche->setMaximumSize(QSize(16777215, 108));
        tableViewRecherche->setTabKeyNavigation(false);
        tableViewRecherche->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_12->addWidget(tableViewRecherche);


        verticalLayout_7->addLayout(verticalLayout_12);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        lineProduit = new QFrame(widget);
        lineProduit->setObjectName(QString::fromUtf8("lineProduit"));
        lineProduit->setEnabled(true);
        lineProduit->setMinimumSize(QSize(0, 0));
        lineProduit->setMaximumSize(QSize(16777215, 16777215));
        lineProduit->setFont(font3);
        lineProduit->setFrameShadow(QFrame::Raised);
        lineProduit->setLineWidth(2);
        lineProduit->setFrameShape(QFrame::HLine);

        verticalLayout_15->addWidget(lineProduit);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font4);

        verticalLayout_15->addWidget(label_13);


        verticalLayout_6->addLayout(verticalLayout_15);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidgetPanier = new QTableWidget(widget);
        if (tableWidgetPanier->columnCount() < 4)
            tableWidgetPanier->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetPanier->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetPanier->setObjectName(QString::fromUtf8("tableWidgetPanier"));
        tableWidgetPanier->setMinimumSize(QSize(400, 0));
        tableWidgetPanier->setMaximumSize(QSize(16777215, 150));
        tableWidgetPanier->setTabKeyNavigation(false);
        tableWidgetPanier->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableWidgetPanier, 4, 2, 4, 2);

        pushButtonSupprimer = new QPushButton(widget);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/home/etudiant/GestionCommerciale/Ressources/Ressources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimer->setIcon(icon1);
        pushButtonSupprimer->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButtonSupprimer, 5, 0, 1, 2);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_23->addWidget(label_16);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_17);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        labelTotal = new QLabel(widget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_10->addWidget(labelTotal);

        labelEuro = new QLabel(widget);
        labelEuro->setObjectName(QString::fromUtf8("labelEuro"));
        labelEuro->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_10->addWidget(labelEuro);


        horizontalLayout_23->addLayout(horizontalLayout_10);


        gridLayout->addLayout(horizontalLayout_23, 6, 0, 1, 2);

        pushButtonEnregistrer = new QPushButton(widget);
        pushButtonEnregistrer->setObjectName(QString::fromUtf8("pushButtonEnregistrer"));
        QFont font5;
        font5.setBold(true);
        font5.setUnderline(false);
        font5.setWeight(75);
        pushButtonEnregistrer->setFont(font5);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/home/etudiant/GestionCommerciale/Ressources/Ressources/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnregistrer->setIcon(icon2);
        pushButtonEnregistrer->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButtonEnregistrer, 7, 0, 1, 2);

        pushButtonAjoutPanierProd = new QPushButton(widget);
        pushButtonAjoutPanierProd->setObjectName(QString::fromUtf8("pushButtonAjoutPanierProd"));
        pushButtonAjoutPanierProd->setIcon(icon);
        pushButtonAjoutPanierProd->setIconSize(QSize(20, 20));

        gridLayout->addWidget(pushButtonAjoutPanierProd, 4, 0, 1, 2);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_7);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_22->addWidget(label_15);

        spinBoxQtt = new QSpinBox(widget);
        spinBoxQtt->setObjectName(QString::fromUtf8("spinBoxQtt"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBoxQtt->sizePolicy().hasHeightForWidth());
        spinBoxQtt->setSizePolicy(sizePolicy);
        spinBoxQtt->setMinimum(1);
        spinBoxQtt->setMaximum(150);

        horizontalLayout_22->addWidget(spinBoxQtt);


        horizontalLayout_21->addLayout(horizontalLayout_22);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16777215, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Bitstream Charter"));
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setUnderline(true);
        font6.setWeight(75);
        label_12->setFont(font6);

        horizontalLayout_9->addWidget(label_12);


        horizontalLayout_21->addLayout(horizontalLayout_9);


        gridLayout->addLayout(horizontalLayout_21, 3, 2, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);

        comboBoxDesignation = new QComboBox(widget);
        comboBoxDesignation->setObjectName(QString::fromUtf8("comboBoxDesignation"));

        horizontalLayout_8->addWidget(comboBoxDesignation);


        gridLayout->addLayout(horizontalLayout_8, 3, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);


        verticalLayout_7->addLayout(verticalLayout_6);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 759, 27));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        menu_Gestion = new QMenu(menuBar);
        menu_Gestion->setObjectName(QString::fromUtf8("menu_Gestion"));
        menu_Aide = new QMenu(menuBar);
        menu_Aide->setObjectName(QString::fromUtf8("menu_Aide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, tableViewCatalogue);
        QWidget::setTabOrder(tableViewCatalogue, pushButtonAjoutProd);
        QWidget::setTabOrder(pushButtonAjoutProd, pushButtonSupprProd);
        QWidget::setTabOrder(pushButtonSupprProd, dateEditCommande);
        QWidget::setTabOrder(dateEditCommande, lineEditId);
        QWidget::setTabOrder(lineEditId, lineEditCP);
        QWidget::setTabOrder(lineEditCP, lineEditNom);
        QWidget::setTabOrder(lineEditNom, lineEditVille);
        QWidget::setTabOrder(lineEditVille, lineEditPrenom);
        QWidget::setTabOrder(lineEditPrenom, pushButton);
        QWidget::setTabOrder(pushButton, tableViewRecherche);
        QWidget::setTabOrder(tableViewRecherche, comboBoxDesignation);
        QWidget::setTabOrder(comboBoxDesignation, spinBoxQtt);
        QWidget::setTabOrder(spinBoxQtt, pushButtonSupprimer);
        QWidget::setTabOrder(pushButtonSupprimer, tableWidgetPanier);
        QWidget::setTabOrder(tableWidgetPanier, pushButtonEnregistrer);

        menuBar->addAction(menu_Fichier->menuAction());
        menuBar->addAction(menu_Gestion->menuAction());
        menuBar->addAction(menu_Aide->menuAction());
        menu_Fichier->addAction(action_Quitter);
        menu_Gestion->addAction(action_Produit);
        menu_Gestion->addAction(action_Commande);
        menu_Aide->addAction(action_A_propos);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_Client_le->setText(QApplication::translate("MainWindow", "&Client\303\250le", 0, QApplication::UnicodeUTF8));
        action_Produit->setText(QApplication::translate("MainWindow", "&Produit", 0, QApplication::UnicodeUTF8));
        action_Commande->setText(QApplication::translate("MainWindow", "&Commande", 0, QApplication::UnicodeUTF8));
        action_A_propos->setText(QApplication::translate("MainWindow", "&A propos", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Liste des produits", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutProd->setText(QApplication::translate("MainWindow", "&Nouveau", 0, QApplication::UnicodeUTF8));
        pushButtonSupprProd->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "&Catalogue", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Commande n\302\260", 0, QApplication::UnicodeUTF8));
        labelCommande->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Date:", 0, QApplication::UnicodeUTF8));
        dateEditCommande->setDisplayFormat(QApplication::translate("MainWindow", "dd/MM/yy", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Client:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Identifiant:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Code Postal:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Nom:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Ville:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Prenom:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "&Nouveau Client", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Resultat:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Produit:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetPanier->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "R\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetPanier->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "D\303\251signation", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetPanier->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetPanier->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "PU", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimer->setText(QApplication::translate("MainWindow", "&Retirer Produit", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Total:", 0, QApplication::UnicodeUTF8));
        labelTotal->setText(QApplication::translate("MainWindow", "plop", 0, QApplication::UnicodeUTF8));
        labelEuro->setText(QApplication::translate("MainWindow", "\342\202\254", 0, QApplication::UnicodeUTF8));
        pushButtonEnregistrer->setText(QApplication::translate("MainWindow", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutPanierProd->setText(QApplication::translate("MainWindow", "&Ajouter Produit", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Quantit\303\251:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Panier:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "D\303\251signation:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "&Commandes", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
        menu_Gestion->setTitle(QApplication::translate("MainWindow", "&Gestion", 0, QApplication::UnicodeUTF8));
        menu_Aide->setTitle(QApplication::translate("MainWindow", "&Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
