/********************************************************************************
** Form generated from reading UI file 'dialonewclient.ui'
**
** Created: Thu May 23 17:00:34 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALONEWCLIENT_H
#define UI_DIALONEWCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialoNewClient
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditIdNewCli;
    QLineEdit *lineEditNomNewCli;
    QLineEdit *lineEditPrenomNewCli;
    QLineEdit *lineEditTelNewCli;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditVilleNewCli;
    QLineEdit *lineEditCPNewCli;
    QLineEdit *lineEditAdrNewCli;
    QLineEdit *lineEditMelNewCli;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialoNewClient)
    {
        if (DialoNewClient->objectName().isEmpty())
            DialoNewClient->setObjectName(QString::fromUtf8("DialoNewClient"));
        DialoNewClient->resize(456, 288);
        widget = new QWidget(DialoNewClient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(2, 21, 448, 204));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(16);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_9->setFont(font);

        horizontalLayout_5->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditIdNewCli = new QLineEdit(widget);
        lineEditIdNewCli->setObjectName(QString::fromUtf8("lineEditIdNewCli"));

        verticalLayout->addWidget(lineEditIdNewCli);

        lineEditNomNewCli = new QLineEdit(widget);
        lineEditNomNewCli->setObjectName(QString::fromUtf8("lineEditNomNewCli"));

        verticalLayout->addWidget(lineEditNomNewCli);

        lineEditPrenomNewCli = new QLineEdit(widget);
        lineEditPrenomNewCli->setObjectName(QString::fromUtf8("lineEditPrenomNewCli"));

        verticalLayout->addWidget(lineEditPrenomNewCli);

        lineEditTelNewCli = new QLineEdit(widget);
        lineEditTelNewCli->setObjectName(QString::fromUtf8("lineEditTelNewCli"));

        verticalLayout->addWidget(lineEditTelNewCli);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEditVilleNewCli = new QLineEdit(widget);
        lineEditVilleNewCli->setObjectName(QString::fromUtf8("lineEditVilleNewCli"));

        verticalLayout_4->addWidget(lineEditVilleNewCli);

        lineEditCPNewCli = new QLineEdit(widget);
        lineEditCPNewCli->setObjectName(QString::fromUtf8("lineEditCPNewCli"));

        verticalLayout_4->addWidget(lineEditCPNewCli);

        lineEditAdrNewCli = new QLineEdit(widget);
        lineEditAdrNewCli->setObjectName(QString::fromUtf8("lineEditAdrNewCli"));

        verticalLayout_4->addWidget(lineEditAdrNewCli);

        lineEditMelNewCli = new QLineEdit(widget);
        lineEditMelNewCli->setObjectName(QString::fromUtf8("lineEditMelNewCli"));

        verticalLayout_4->addWidget(lineEditMelNewCli);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_5->addLayout(horizontalLayout_4);


        retranslateUi(DialoNewClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialoNewClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialoNewClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialoNewClient);
    } // setupUi

    void retranslateUi(QDialog *DialoNewClient)
    {
        DialoNewClient->setWindowTitle(QApplication::translate("DialoNewClient", "Dialog", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DialoNewClient", "Nouveau Client:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialoNewClient", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialoNewClient", "Nom :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialoNewClient", "Prenom :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialoNewClient", "Telephone :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialoNewClient", "Ville :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialoNewClient", "Code postal :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialoNewClient", "Adresse :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialoNewClient", "Mail:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialoNewClient: public Ui_DialoNewClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALONEWCLIENT_H
