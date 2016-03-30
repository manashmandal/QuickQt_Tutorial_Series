#ifndef ADMINPRIV_H
#define ADMINPRIV_H

#include <QWidget>

namespace Ui {
class AdminPriv;
}

class AdminPriv : public QWidget
{
    Q_OBJECT

public:
    explicit AdminPriv(QWidget *parent = 0);
    ~AdminPriv();

private slots:
    void on_checkButton_clicked();

private:
    Ui::AdminPriv *ui;
};

#endif // ADMINPRIV_H
