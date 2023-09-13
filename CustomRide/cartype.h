#ifndef CARTYPE_H
#define CARTYPE_H

#include <QMainWindow>

namespace Ui {
class CarType;
}

class CarType : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarType(QWidget *parent = nullptr);
    ~CarType();

private:
    Ui::CarType *ui;
};

#endif // CARTYPE_H
