#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "setting.h"
#include <QMainWindow>
#include <QPushButton>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public Q_SLOTS:
    void settingButtonClicked();
    void qsdButtonClicked();
    void finishButtonClicked();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *settingPushButton;
    QPushButton *qsdPushButton;
    QPushButton *finishPushButton;
    Setting *settingUi;
    QStackedWidget *stackedWidget;
};

#endif // MAINWINDOW_H
