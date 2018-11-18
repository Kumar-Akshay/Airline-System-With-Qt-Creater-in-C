#include "reservation.h"
#include "ui_reservation.h"

Reservation::Reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);
}

Reservation::~Reservation()
{
    delete ui;
}
