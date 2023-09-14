#ifndef CARTYPEWINDOW_H
#define CARTYPEWINDOW_H

#include <QMainWindow>
#include <mainwindow.h>

namespace Ui {
class carTypeWindow;
}

class carTypeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit carTypeWindow(MainWindow *mainWindow,QWidget *parent = nullptr);
    ~carTypeWindow();

private slots:
    void on_doneButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::carTypeWindow *ui;
    MainWindow *mainWindow;
};

#endif // CARTYPEWINDOW_H
