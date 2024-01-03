#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("close");
    connect(ui->horizontalSliderConectat, SIGNAL(valueChanged(int)),
            ui->progressBar_2, SLOT(setValue(int)));

    connect(ui->horizontalSliderConectat, SIGNAL(valueChanged(int)),
            ui->progressBar_3, SLOT(setValue(int)));

    disconnect(ui->horizontalSliderConectat, SIGNAL(valueChanged(int)),
            ui->progressBar_3, SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{

}

