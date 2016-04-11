#include "compositewidget.h"
#include "ui_compositewidget.h"
#include <QListWidget>
#include <QListWidgetItem>
#include "thelistitem.h"

CompositeWidget::CompositeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompositeWidget)
{
    ui->setupUi(this);
}

CompositeWidget::~CompositeWidget()
{
    delete ui;
}

void CompositeWidget::on_addItemButton_clicked()
{
    QListWidgetItem *item = new QListWidgetItem(this->ui->compositeListWidget);
    this->ui->compositeListWidget->addItem (item);
    TheListItem *theItem = new TheListItem;
    item->setSizeHint (theItem->sizeHint ());
    this->ui->compositeListWidget->setItemWidget (item, theItem);
}

void CompositeWidget::on_delItemButton_clicked()
{
    delete this->ui->compositeListWidget->currentItem ();
}
