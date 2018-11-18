#ifndef SECDIALOG_H
#define SECDIALOG_H
#include <QDialog>

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = 0);
    ~secDialog();

private slots:
    void on_reservation_clicked();

    void on_Backmenu_clicked();

    void on_Next_clicked();

    void on_Backbutton_clicked();

    void on_insertbutton_clicked();

    void on_FlightDetails_clicked();

    void on_Backdeatail_clicked();

    void on_fdetails_clicked();

    void on_pushButton_2_clicked();

    void on_comboBoxdetail_currentIndexChanged(const QString &arg1);

    void on_back_clicked();

    void on_search_clicked();

    void on_back_2_clicked();

    void on_back_3_clicked();

    void on_insertflight_clicked();

    void on_pushButton_3_clicked();

    void on_CancelFlight_clicked();

    void on_Search_clicked();

    void on_Back_clicked();

    void on_Deletecancel_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_BackR_clicked();

    void on_Search_2_clicked();

    void on_Print_clicked();

private:
    Ui::secDialog *ui;

};

#endif // SECDIALOG_H
