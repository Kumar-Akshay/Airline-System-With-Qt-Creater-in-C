#include "secdialog.h"
#include "ui_secdialog.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
#include "QString"
#include "QTime"
#include "stdlib.h"


secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
        // number of customer
    ui->setupUi(this);
    for(int i=1;i<6;i++)
    ui->comboBox->addItem(QString::number(i));

        // select class
    ui->comboBoxclass->addItem("Bussiness Class");
    ui->comboBoxclass->addItem("Economy Class");



}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_reservation_clicked()
{
     qsrand(QTime::currentTime().msec());
    int Ticket1 = rand() % 1500 + 500;
    ui->TicketNo->setText(QString::number(Ticket1));
    ui->stackedWidgetmain->setCurrentIndex(1);
}

void secDialog::on_Backmenu_clicked()
{
    ui->stackedWidgetmain->setCurrentIndex(0);
}

void secDialog::on_Next_clicked()
{
        ui->stackedWidgetmain->setCurrentIndex(2);
}

void secDialog::on_Backbutton_clicked()
{
     ui->stackedWidgetmain->setCurrentIndex(1);
}

void secDialog::on_insertbutton_clicked()
{

    QFile file("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat Data.bin");
    if(!file.open(QFile::WriteOnly |QFile::Append |QFile::Text ))
                QMessageBox::warning(this,"Airline System","File Not Created");

    QString Ticket,Name,address,email,phone,passnumber,Date,Time,Arrivecity,departcity,Class,totalticket;
        Ticket      = ui->TicketNo->text();
        Name        = ui->Nameinput->text();
        address     = ui->addressinput->text();
        email       = ui->Emailinput->text();
        phone       = ui->phoneinput->text();
        passnumber  = ui->Passportinput->text();
        Date        = ui->dateinput->text();
        Time        = ui->timeinput->text();
        Arrivecity  = ui->Ainput->text();
        departcity  = ui->Dinput->text();
        Class       = ui->comboBoxclass->currentText();
        totalticket = ui->comboBox->currentText();

if( Name==0 && address==0 && email==0 && phone==0 && passnumber==0 && Date==0 && Time==0 && Arrivecity==0 && departcity==0){

    QMessageBox::StandardButtons reply =QMessageBox::critical(this,"InSert Record","Record Inserted Invaild",QMessageBox::Ok);
            if(reply== QMessageBox::Ok)
             ui->stackedWidgetmain->setCurrentIndex(1);
    }
  else{




    QTextStream writefile(&file);
writefile <<Ticket<<"  "<<Time<<"  "<<Date<<"  "<<Name<<"  "<<email<<"  "<<address<<"  "<<passnumber<<"  "<<phone<<"  "<<Arrivecity<<"  "<<departcity<<"  "<<totalticket<<endl;

            // clear edit line

                ui->Nameinput->clear();
                ui->addressinput->clear();
                ui->Emailinput->clear();
                ui->phoneinput->clear();
                ui->Passportinput->clear();
                ui->TicketNo->clear();
                ui->Dinput->clear();
                ui->Ainput->clear();
                ui->dateinput->clear();
                ui->timeinput->clear();


            QMessageBox::information(this,"Seats Reserve","Successfully Seats Reserve");
                                                                            }
        file.flush();
        file.close();  }


void secDialog::on_FlightDetails_clicked()
{
    ui->stackedWidgetmain->setCurrentIndex(3);
}

void secDialog::on_fdetails_clicked()
{
    ui->stackedWidgetmain->setCurrentIndex(4);
}

void secDialog::on_Backdeatail_clicked()
{
    ui->stackedWidgetmain->setCurrentIndex(0);
}


void secDialog::on_back_clicked()
{
    ui->searchflightname->clear();
    ui->searchflightform->clear();
    ui->searchflightnumber->clear();
    ui->searchflighttime->clear();
    ui->searchflightTo->clear();
     ui->stackedWidgetmain->setCurrentIndex(3);
}

void secDialog::on_search_clicked()
{
    QFile file("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/PlaneNames.bin");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
                QMessageBox::warning(this,"Airline System","File Not found");
            QTextStream my_stream(&file);

   QString Input,Input1,Input2,Input3,Input4;
        QString number= ui->searchflight->text();

            my_stream >>Input;
        while (!my_stream.atEnd()) {
           if(number == Input){
               my_stream >>Input1>>Input2>>Input3>>Input4;
               ui->searchflightname->setText(Input);
               ui->searchflightnumber->setText(Input1);
               ui->searchflightform->setText(Input2);
               ui->searchflightTo->setText(Input3);
               ui->searchflighttime->setText(Input4);

           }

            my_stream >>Input;
        }

    file.close();
}

void secDialog::on_insertflight_clicked()
{
    ui->stackedWidgetmain->setCurrentIndex(5);
}


void secDialog::on_back_2_clicked()
{
     ui->stackedWidgetmain->setCurrentIndex(3);
}

void secDialog::on_back_3_clicked()
{

    QFile file("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/PlaneNames.bin");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                QMessageBox::warning(this,"Airline System","File Not Created");
            QTextStream my_stream(&file);
         QMessageBox::StandardButton reply;
   QString number,name,form,to,time;

               number=ui->NumberSave->text();
               name  =ui->NameSave->text();
               form = ui->FormSave->text();
               to   = ui->TOSave->text();
               time = ui->TimeSave->text();
   reply = QMessageBox::information(this,"Airline System","Do You Want to Save Record",QMessageBox::Yes|QMessageBox::No);
               if(reply== QMessageBox::Yes){
               my_stream << number<<"  "<<name<<"  "<<form<<"  "<<to<<"  "<<time<<endl;
               ui->NumberSave->clear();
               ui->NameSave->clear();
               ui->FormSave->clear();
               ui->TOSave->clear();
               ui->TimeSave->clear();

               }
               else{
                ui->NumberSave->clear();
                ui->NameSave->clear();
                ui->FormSave->clear();
                ui->TOSave->clear();
                ui->TimeSave->clear();

               }
    file.close();
}


void secDialog::on_CancelFlight_clicked()
{
 ui->stackedWidgetmain->setCurrentIndex(6);
}

void secDialog::on_Search_clicked()
{
    QFile fout("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat Data.bin");
    if(!fout.open(QFile::ReadOnly|QFile::Text )){
                QMessageBox::warning(this,"Airline System","File Not Created");
                    }
    QTextStream out(&fout);
    QString TicketNo1,Name1,address1,email1,phone1,passnumber1,Date1,Time1,Arrivecity1,departcity1,Total1;
    QString NameSearch1 = ui->Inputsss->text();
    if(NameSearch1==0){
        QMessageBox::warning(this,"Airline System","Invaild Input");
    }

    while(!out.atEnd()){
 out>>TicketNo1>>Time1>>Date1>>Name1>>email1>>address1>>passnumber1>>phone1>>Arrivecity1>>departcity1>>Total1;
        if( Name1!=NameSearch1){
            //Do Nothing
        }
        else if( Name1==NameSearch1){
            ui->Ticketinput->setText(TicketNo1);
            ui->CNameinput->setText(Name1);
            ui->CEmailinput->setText(email1);
            ui->CPassportInput->setText(passnumber1);
            ui->CPhoneInput->setText(phone1);
            ui->CAddressInput->setText(address1);
            ui->CTImeInput->setText(Time1);
            ui->Cdateinput->setText(Date1);
            ui->CArrrivalInput->setText(Arrivecity1);
            ui->CdepartureInput->setText(departcity1);
        }
    }

                }




void secDialog::on_Back_clicked()
{
    ui->Inputsss->clear();
    ui->Ticketinput->clear();
    ui->CNameinput->clear();
    ui->CEmailinput->clear();
    ui->CPassportInput->clear();
    ui->CPhoneInput->clear();
    ui->CAddressInput->clear();
    ui->CTImeInput->clear();
    ui->Cdateinput->clear();
    ui->CArrrivalInput->clear();
    ui->CdepartureInput->clear();
ui->stackedWidgetmain->setCurrentIndex(0);
}


void secDialog::on_Deletecancel_clicked()
{
    QFile fout("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat Data.bin");
    if(!fout.open(QIODevice::ReadOnly|QIODevice::Text ))
                QMessageBox::warning(this,"Airline System","File Found");
    QFile fin("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat temp.bin");
    if(!fin.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text ))
                QMessageBox::warning(this,"Airline System","File Not Created");


        QTextStream my(&fout);
        QTextStream myin(&fin);
        QString TicketNo2,Name2,address2,email2,phone2,passnumber2,Date2,Time2,Arrivecity2,departcity2,Total2;

        QString NameSearch2 = ui->Inputsss->text();

        if(NameSearch2==0){
            QMessageBox::warning(this,"Airline System","Invaild Input");
        }

      while(!my.atEnd()){
        my>>TicketNo2>>Time2>>Date2>>Name2>>email2>>passnumber2>>address2>>phone2>>Arrivecity2>>departcity2>>Total2;

             if(NameSearch2!=Name2){
                 myin <<TicketNo2<<" ";
                 myin <<Time2<<" ";
                 myin <<Date2<<" ";
                 myin <<Name2<<" ";
                 myin <<email2<<" ";
                 myin <<passnumber2<<" ";
                 myin <<address2<<" ";
                 myin <<phone2<<" ";
                 myin <<Arrivecity2<<" ";
                 myin <<departcity2<<" ";
                 myin <<Total2<<" "<<endl;

             }
             else{
                 ui->Ticketinput->clear();
                 ui->CNameinput->clear();
                 ui->CEmailinput->clear();
                 ui->CAddressInput->clear();
                 ui->CPassportInput->clear();
                 ui->CPhoneInput->clear();
                 ui->CTImeInput->clear();
                 ui->CArrrivalInput->clear();
                 ui->CdepartureInput->clear();
                 ui->Cdateinput->clear();
                 ui->Inputsss->clear();
             }



      }

             fin.close();
             fout.close();

            remove("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat Data.bin");
            rename("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat temp.bin","C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat Data.bin");
    }


void secDialog::on_pushButton_4_clicked()
{
    ui->stackedWidgetmain->setCurrentIndex(7);
}

void secDialog::on_pushButton_5_clicked()
{   QMessageBox::StandardButton reply;
    reply = QMessageBox::information(this,"Airline System","Do You Want to Exit System",QMessageBox::Yes|QMessageBox::No);
                if(reply == QMessageBox::Yes){
                    exit(0);
                }
                else{
                  ui->stackedWidgetmain->setCurrentIndex(0);
                }

}

void secDialog::on_BackR_clicked()
{
    ui->SearchReciptInput->clear();
    ui->NameRinput->clear();
    ui->TicketRInput->clear();
    ui->ArrivedSinput->clear();
    ui->DepartureSinput->clear();
    ui->DateSinput->clear();
    ui->TimeSinput->clear();
    ui->AmountShow->clear();
    ui->stackedWidgetmain->setCurrentIndex(0);
}

void secDialog::on_Search_2_clicked()
{
    QFile fout("C:/Users/Akshay Kumar/Desktop/Airline/untitled/Filing/reserveSeat Data.bin");
    if(!fout.open(QFile::ReadOnly|QFile::Text )){
                QMessageBox::warning(this,"Airline System","File Found");}
         QTextStream my(&fout);
        QString Total,TicketNo,Name,address,email,phone,passnumber,Date,Time,Arrivecity,departcity;
           QString NameSearch = ui->SearchReciptInput->text();
           while(!my.atEnd()){
             my>>TicketNo>>Time>>Date>>Name>>email>>passnumber>>address>>phone>>Arrivecity>>departcity>>Total;
             if( Name==NameSearch){
                 //if( Name!=NameSearch){
                 //Do Nothing
                 int Num=Total.toInt();
                    Num=Num*13000;
                 ui->TicketRInput->setText(TicketNo);
                 ui->NameRinput->setText(Name);
                 ui->DepartureSinput->setText(departcity);
                 ui->ArrivedSinput->setText(Arrivecity);
                 ui->TimeSinput->setText(Time);
                 ui->DateSinput->setText(Date);
                 ui->AmountShow->setText(QString::number(Num));
             }

                   }

           }


void secDialog::on_Print_clicked()
{
    if(ui->SearchReciptInput->text()==0)
        QMessageBox::information(this,"Airline System","Please Search Record \nNo Printing Data Found");
    else{
    QMessageBox::information(this,"Airline System","Thansk For Using Our Services\n Printing..........");
    ui->stackedWidgetmain->setCurrentIndex(0);
    }
}
