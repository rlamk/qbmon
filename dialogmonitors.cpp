#include "dialogmonitors.h"
#include "ui_dialogmonitors.h"
#include "about.h"

#include <QStringList>


DialogMonitors::DialogMonitors(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMonitors)
{
    ui->setupUi(this);
}

void DialogMonitors::AddMonitorsList( QStringList List )
{
    ui->comboBox->addItems(List);
}

DialogMonitors::~DialogMonitors()
{
    delete ui;
}

void DialogMonitors::on_buttonBox_accepted()
{
    this->SelectedMonitor = ui->comboBox->currentText();
}


void DialogMonitors::on_buttonBox_helpRequested()
{
    About about;
    about.exec();
}


void DialogMonitors::on_buttonBox_rejected()
{

}

