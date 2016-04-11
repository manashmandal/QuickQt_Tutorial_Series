#include "compositewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CompositeWidget w;
    w.show();

    return a.exec();
}
