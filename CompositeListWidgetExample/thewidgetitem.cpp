#include "thewidgetitem.h"
#include "ui_thewidgetitem.h"

TheWidgetItem::TheWidgetItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TheWidgetItem)
{
    ui->setupUi(this);
}

TheWidgetItem::~TheWidgetItem()
{
    delete ui;
}

void TheWidgetItem::on_pressThisBtn_clicked()
{
    //Getting text from lineEdit and setting it to the label
    ui->label->setText (ui->lineEdit->text ());
}

void TheWidgetItem::on_horizontalSlider_valueChanged(int value)
{
    //Connecting slider with the progressbar
    ui->progressBar->setValue (value);
}
