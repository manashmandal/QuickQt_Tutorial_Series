#ifndef QSETTINGSEXAMPLE_H
#define QSETTINGSEXAMPLE_H

#include <QDialog>
#include <QString>
#include <QSettings>
#include <QLineEdit>

namespace Ui {
class QSettingsExample;
}

class QSettingsExample : public QDialog
{
    Q_OBJECT

public:
    explicit QSettingsExample(QWidget *parent = 0);
    ~QSettingsExample();

private slots:
    void on_saveDataButton_clicked();

    void on_loadDataButton_clicked();

private:
    Ui::QSettingsExample *ui;
};

void saveSettings(const QString &key, const QVariant &value, const QString &group);
QVariant loadSettings(const QString &key, const QString &group, const QVariant &defaultValue);

#endif // QSETTINGSEXAMPLE_H
