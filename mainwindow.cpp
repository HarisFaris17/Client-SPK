#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    settingUi(new Setting())
{
    ui->setupUi(this);
    settingPushButton = ui->settingPushButton;
    qsdPushButton = ui->qsdPushButton;
    finishPushButton = ui->finishPushButton;
    stackedWidget = ui->stackedWidget;

    stackedWidget->setCurrentIndex(0);

    connect(settingPushButton,&QPushButton::clicked,this,&MainWindow::settingButtonClicked);
    connect(qsdPushButton,&QPushButton::clicked,this,&MainWindow::qsdButtonClicked);
    connect(finishPushButton,&QPushButton::clicked,this,&MainWindow::finishButtonClicked);
//    settingUi->cl
//    connect(,&QPushButton::)
}

void MainWindow::settingButtonClicked(){
    settingUi->open();
}

void MainWindow::qsdButtonClicked(){
    stackedWidget->setCurrentIndex(1);
}

void MainWindow::finishButtonClicked(){
    stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
