#include "rentafacil.h"
#include "ui_rentafacil.h"
#include "registro.h"

#include <QtDebug>
#include <QString>
#include<QList>

RentaFacil::RentaFacil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RentaFacil)
{
    ui->setupUi(this);
}

RentaFacil::~RentaFacil()
{
    delete ui;
}

void RentaFacil::on_btnRegToIni_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void RentaFacil::on_btnCreaCuenta_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void RentaFacil::on_btnRefIniSes_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void RentaFacil::on_btnback_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void RentaFacil::on_pushButton_clicked()
{
//hola


    // kkkkkkkkkkk
}

void RentaFacil::on_pushButton_3_clicked()
{
    //esta esta creada por noe
    //esta esta  creada por daniel
}

void RentaFacil::on_pushButton_4_clicked()
{

}
