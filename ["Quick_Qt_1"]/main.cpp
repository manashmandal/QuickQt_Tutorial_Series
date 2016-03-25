#include "qsettingsexample.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSettingsExample w;
    a.setApplicationName("Settings Example");
    a.setOrganizationName("Electroscholars");
    a.setOrganizationDomain("http://electroscholars.com");
    w.show();

    return a.exec();
}
