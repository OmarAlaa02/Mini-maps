#include "addedgepage.h"
#include "ui_addedgepage.h"
#include "graph.h"
addEdgepage::addEdgepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEdgepage)
{
    ui->setupUi(this);

    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
}

addEdgepage::~addEdgepage()
{
    delete ui;
}



void addEdgepage::on_comboBox_currentTextChanged(const QString &arg1)
{
    string graph_name=arg1.toStdString();

    for(auto &it:Graph::graphs[graph_name])
    {
        ui->comboBox_2->addItem(QString::fromStdString(it.first));
        ui->comboBox_3->addItem(QString::fromStdString(it.first));
    }
}


void addEdgepage::on_pushButton_clicked()
{
    string graph_name=ui->comboBox->currentText().toStdString();
    string city1=ui->comboBox_2->currentText().toStdString();
    string city2=ui->comboBox_3->currentText().toStdString();
    string cost=ui->lineEdit->text().toStdString();
    string data=city1+ ' ' + city2 + ' ' + cost;

    Graph::appendToGraph(graph_name,data);
}

