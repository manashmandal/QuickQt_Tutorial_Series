#ifndef THELISTITEM_H
#define THELISTITEM_H

#include <QWidget>

namespace Ui {
class TheListItem;
}

class TheListItem : public QWidget
{
    Q_OBJECT

public:
    explicit TheListItem(QWidget *parent = 0);
    ~TheListItem();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TheListItem *ui;
};

#endif // THELISTITEM_H
