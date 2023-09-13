#ifndef CARTYPEWINDOW_H
#define CARTYPEWINDOW_H

#include <QMainWindow>

namespace Ui {
class carTypeWindow;
}

class carTypeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit carTypeWindow(QWidget *parent = nullptr);
    ~carTypeWindow();

private:
    Ui::carTypeWindow *ui;
};

#endif // CARTYPEWINDOW_H
