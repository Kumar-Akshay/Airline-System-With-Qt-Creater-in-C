#include "airlineproject.h"
#include "ui_airlineproject.h"
#include "QMessageBox"
#include "QPixmap"
#include "QFile"
#include "QTextStream"


Airlineproject::Airlineproject(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Airlineproject)
{
    ui->setupUi(this);

}

Airlineproject::~Airlineproject()
{
    delete ui;
}

void Airlineproject::on_SignInButton_clicked()
{
    QString username = ui->Uinput->text();
    QString password = ui->lineEdit_2->text();

    QFile file("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/password.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"Airline System","File not Open");
         }
        QTextStream in(&file);
        QString Key=in.readLine();
        QString Key1=in.readLine();
        file.close();

    if(username != Key){
        QMessageBox::warning(this,"Login", "UserName is Incorrect");
        ui->statusBar->showMessage("Your Enter Incorrect Username");
    }
    else if(password == Key1){
        ui->statusBar->showMessage("Your Enter correct PassWord",5000);
        hide();
    SecDialog = new secDialog(this);
    SecDialog->show();

    }
    else{
        QMessageBox::warning(this,"Login", " Password is Incorrect");
        ui->statusBar->showMessage("Your Enter Incorrect PassWord",5000);
    }

}
