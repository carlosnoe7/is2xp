#ifndef REGISTRO_H
#define REGISTRO_H

#include <QMainWindow>

namespace Ui {
class Registro;
}

class Registro : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registro(QWidget *parent = nullptr);
    ~Registro();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
