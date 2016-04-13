#include "qmainwidget.h"
#include "ui_qmainwidget.h"

QMainWidget::QMainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QMainWidget)
{
    ui->setupUi(this);
}

QMainWidget::~QMainWidget()
{
    delete ui;
}

void QMainWidget::on_addBtn_clicked()
{
    //Creating a new list widget item whose parent is the listwidget itself
    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->listWidget);

    //Adding the item to the listwidget
    ui->listWidget->addItem (listWidgetItem);

    //Creating an object of the designed widget which is to be added to the listwidget
    TheWidgetItem *theWidgetItem = new TheWidgetItem;

    //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (theWidgetItem->sizeHint ());

    //Finally adding the itemWidget to the list
    ui->listWidget->setItemWidget (listWidgetItem, theWidgetItem);
}

void QMainWidget::on_delBtn_clicked()
{
    //Delete selected item from the listWidget
    delete ui->listWidget->currentItem ();
}
