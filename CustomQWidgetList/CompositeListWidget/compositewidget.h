#ifndef COMPOSITEWIDGET_H
#define COMPOSITEWIDGET_H

#include <QWidget>

namespace Ui {
class CompositeWidget;
}

class CompositeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CompositeWidget(QWidget *parent = 0);
    ~CompositeWidget();

private slots:
    void on_addItemButton_clicked();

    void on_delItemButton_clicked();

private:
    Ui::CompositeWidget *ui;
};

#endif // COMPOSITEWIDGET_H
