#include "dialonewclient.h"
#include "ui_dialonewclient.h"

DialoNewClient::DialoNewClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialoNewClient)
{
    ui->setupUi(this);
}

DialoNewClient::~DialoNewClient()
{
    delete ui;
}

void DialoNewClient::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
