#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <car.h>

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Car *getCar() const;
    void setImageLabel(QString str);

private slots:

    void on_modelMakeButton_clicked();
    void on_engineButton_clicked();
    void on_ePlacementButton_clicked();
    void on_driveTrainButton_clicked();
    void on_exitButton_clicked();
    void on_fuelButton_clicked();
    void on_transButton_clicked();
    void on_finishButton_clicked();

private:
    Ui::MainWindow *ui;
    Car *car;


};
#endif // MAINWINDOW_H
