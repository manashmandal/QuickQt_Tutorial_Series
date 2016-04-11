#include "thelistitem.h"
#include "ui_thelistitem.h"

TheListItem::TheListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TheListItem)
{
    ui->setupUi(this);
}

TheListItem::~TheListItem()
{
    delete ui;
}

void TheListItem::on_pushButton_clicked()
{
    ui->label->setText (ui->lineEdit->text ());
}
