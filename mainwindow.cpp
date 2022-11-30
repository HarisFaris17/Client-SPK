#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    settingUi(new Setting())
{
    ui->setupUi(this);
    settingPushButton = ui->settingPushButton;
    connect(settingPushButton,&QPushButton::clicked,this,&MainWindow::settingButtonClicked);
    settingUi->open();
}

void MainWindow::settingButtonClicked(){

}

MainWindow::~MainWindow()
{
    delete ui;
}
