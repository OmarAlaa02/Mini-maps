#include "deletegraphpage.h"
#include "ui_deletegraphpage.h"
#include "graph.h"

deleteGraphpage::deleteGraphpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteGraphpage)
{
    ui->setupUi(this);

    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
}

deleteGraphpage::~deleteGraphpage()
{
    delete ui;
}

void deleteGraphpage::on_pushButton_clicked()
{
    string graph_name=ui->comboBox->currentText().toStdString();
    Graph::graphs.erase(graph_name);

    ui->comboBox->clear();
    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
}

