#ifndef RENTAFACIL_H
#define RENTAFACIL_H

#include <QMainWindow>

namespace Ui {
class RentaFacil;
}

class RentaFacil : public QMainWindow
{
    Q_OBJECT

public:
    explicit RentaFacil(QWidget *parent = nullptr);
    ~RentaFacil();

private slots:

    void on_btnRegToIni_clicked();

    void on_btnCreaCuenta_clicked();

    void on_btnRefIniSes_clicked();

    void on_btnback_clicked();
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::RentaFacil *ui;
};

#endif // RENTAFACIL_H
