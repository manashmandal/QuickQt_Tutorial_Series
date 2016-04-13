#ifndef QMAINWIDGET_H
#define QMAINWIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include "thewidgetitem.h"
#include <QVector>
#include <QDebug>

namespace Ui {
class QMainWidget;
}

class QMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QMainWidget(QWidget *parent = 0);
    ~QMainWidget();

    QVector <TheWidgetItem*> itemVec;

private slots:
    void on_addBtn_clicked();

    void on_delBtn_clicked();

private:
    Ui::QMainWidget *ui;
};

#endif // QMAINWIDGET_H
