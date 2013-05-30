#ifndef DIALONEWCLIENT_H
#define DIALONEWCLIENT_H

#include <QDialog>

namespace Ui {
    class DialoNewClient;
}

class DialoNewClient : public QDialog {
    Q_OBJECT
public:
    DialoNewClient(QWidget *parent = 0);
    ~DialoNewClient();
    Ui::DialoNewClient *ui;
protected:
    void changeEvent(QEvent *e);
//anciennement private

private:

};

#endif // DIALONEWCLIENT_H
