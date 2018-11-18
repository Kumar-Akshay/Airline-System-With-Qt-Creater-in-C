#ifndef AIRLINEPROJECT_H
#define AIRLINEPROJECT_H

#include <QMainWindow>
#include "secdialog.h"

namespace Ui {
class Airlineproject;
}

class Airlineproject : public QMainWindow
{
    Q_OBJECT

public:
    explicit Airlineproject(QWidget *parent = 0);
    ~Airlineproject();

private slots:
    void on_SignInButton_clicked();

private:
    Ui::Airlineproject *ui;   
    secDialog *SecDialog;
};

#endif // AIRLINEPROJECT_H
