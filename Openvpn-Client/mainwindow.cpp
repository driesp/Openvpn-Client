#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->clients->setSizeConstraint(QLayout::SetMinimumSize);
    ui->label->setText("OpenVPN-Client");
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
    clientEL *client = new clientEL(this);
    ui->clients->addWidget(client);
}

MainWindow::~MainWindow()
{
    delete ui;
}
