#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->DernierCodeSaisi->setText("Pas de code saisi !!");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BtnSauvearder_clicked()
{
    if(ui->Code->text() == "")
    {
        QMessageBox msgBox;
        msgBox.setText("entrer un code!");
        msgBox.setInformativeText("nulos!!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        int ret = msgBox.exec();
    }
    else
    {
        ui->ListeDesCodes->addItem(ui->Code->text());
       ui->DernierCodeSaisi->setText (ui->Code->text());
    }

}

