#include "adminpriv.h"
#include "ui_adminpriv.h"
#include <QSettings>
#include <QDebug>

//Admin privilege checker string
#define ADMIN_TEST_STRING "HKEY_LOCAL_MACHINE"
#define ADMIN_DEFAULT_KEY "(Default)"


//If Admin privilege was activated or not
#define ADMIN_CHECK_OK "Administrator privilege was activated"
#define ADMIN_CHECK_FAILED "Administrator privilege not found"

AdminPriv::AdminPriv(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPriv)
{
    ui->setupUi(this);
}

AdminPriv::~AdminPriv()
{
    delete ui;
}

void AdminPriv::on_checkButton_clicked()
{
    QSettings adminPrivSettings(ADMIN_TEST_STRING, QSettings::NativeFormat);
    QVariant currentAdminStatus = adminPrivSettings.value(ADMIN_DEFAULT_KEY);
    adminPrivSettings.setValue(ADMIN_DEFAULT_KEY, currentAdminStatus);
    adminPrivSettings.sync();

    //Check for admin privilege mode
    if (adminPrivSettings.status() == QSettings::AccessError){
        ui->statusLabel->setText(QString(ADMIN_CHECK_FAILED));
    } else {
        ui->statusLabel->setText(QString(ADMIN_CHECK_OK));
    }
}
