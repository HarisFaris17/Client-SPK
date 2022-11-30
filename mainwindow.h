#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "setting.h"
#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public Q_SLOTS:
    void settingButtonClicked();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *settingPushButton;
    Setting *settingUi;

};

#endif // MAINWINDOW_H
