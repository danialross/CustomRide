#ifndef FINISHWINDOW_H
#define FINISHWINDOW_H

#include <QMainWindow>
#include <mainwindow.h>

namespace Ui {
class finishWindow;
}

class finishWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit finishWindow(MainWindow *mainWindow,QString img,QWidget *parent = nullptr);
    ~finishWindow();

private slots:
    void on_backButton_clicked();

    void on_repeatButton_clicked();

    void on_finishButton_clicked();

private:
    Ui::finishWindow *ui;
    MainWindow *mainWindow;
};

#endif // FINISHWINDOW_H
