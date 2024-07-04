#include "mywidget.h"
#include "ui_mywidget.h"


myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);

    QPushButton *btn1=new QPushButton;
    btn1->setParent(this);
    this->setFixedSize(600,400);
    btn1->setText("BT1");
    QPushButton *btn2=new QPushButton("Bt2",this);
    btn2->move(0,20);
}

myWidget::~myWidget()
{
    delete ui;
}
