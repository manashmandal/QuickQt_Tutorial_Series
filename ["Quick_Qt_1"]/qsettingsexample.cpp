#include "qsettingsexample.h"
#include "ui_qsettingsexample.h"

#define GROUP "settings_group"
#define KEY "key_for_value"
#define DEFAULT_VALUE "when_no_key_is_found_this_value_will_be_returned"

QSettingsExample::QSettingsExample(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QSettingsExample)
{
    ui->setupUi(this);
}

QSettingsExample::~QSettingsExample()
{
    delete ui;
}


void saveSettings(const QString &key, const QVariant &value, const QString &group)
{
    QSettings settings;
    settings.beginGroup(group);
    settings.setValue(key, value);
    settings.endGroup();
}

QVariant loadSettings(const QString &key, const QString &group, const QVariant &defaultValue = QVariant())
{
    QSettings settings;
    settings.beginGroup(group);
    QVariant value = settings.value(key, defaultValue);
    settings.endGroup();
    return value;
}

void QSettingsExample::on_saveDataButton_clicked()
{
    QString value = ui->textLineEdit->text();
    saveSettings(KEY, value, GROUP);
}



void QSettingsExample::on_loadDataButton_clicked()
{
    QString value = loadSettings(KEY, GROUP, DEFAULT_VALUE).toString();
    ui->textLineEdit->setText(value);
}
