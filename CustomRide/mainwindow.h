#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void setImageLabel(QString str);




private slots:

    void on_cylinderButton_clicked();
    void on_displacementButton_clicked();
    void on_driveTrainButton_clicked();
    void on_exitButton_clicked();
    void on_fuelButton_clicked();
    void on_transButton_clicked();
    void on_typeButton_clicked();


private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
