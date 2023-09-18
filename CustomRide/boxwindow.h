#ifndef BOXWINDOW_H
#define BOXWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <mainwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class boxWindow; }
QT_END_NAMESPACE

class boxWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit boxWindow(MainWindow *mainWindow, string db, QWidget *parent = nullptr);
    ~boxWindow();

private slots:
    void on_doneButton_clicked();
    void on_comboBox_activated(int index);

private:
    Ui::boxWindow *ui;
    MainWindow *mainWindow;
    unordered_map<string,int> *map;
    void initCombobox(string filename);


};

#endif // BOXWINDOW_H
