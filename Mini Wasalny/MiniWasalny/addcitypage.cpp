#include "addcitypage.h"
#include "ui_addcitypage.h"
#include "graph.h"

#include <QMessageBox>
addCitypage::addCitypage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCitypage)
{
    ui->setupUi(this);

    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
    ui->textEdit->hide();
    ui->label_2->hide();
}

addCitypage::~addCitypage()
{
    delete ui;
}

string addCitypage::makeData(string city,string data)
{
    string s=city+' ';

    if(data.back()!='\n')
        data+='\n';
    string tmp="";

    for(auto &c:data)
    {
        if(c==' ')
        {
            s+=tmp+' ';
            tmp="";
        }
        else if(c=='\n')
        {
            s+=tmp+'\n';
            tmp=city+' ';
        }
        else
        {
            tmp+=c;
        }
    }

    QMessageBox::information(this,"",QString::fromStdString(s));

    return s;
}


void addCitypage::on_pushButton_clicked()
{
    string graph_name=ui->comboBox->currentText().toStdString();
    string city_name=ui->lineEdit->text().toStdString();
    string city_data=ui->textEdit->toPlainText().toStdString();

    if(Graph::graphs[graph_name].find(city_name)!=Graph::graphs[graph_name].end())
    {
        QMessageBox::warning(this,"Invalid input","City already in graph");
        return;
    }

    if(city_data=="")
    {
        Graph::graphs[graph_name][city_name];
        return;
    }

    Graph::appendToGraph(graph_name,makeData(city_name,city_data));
}


void addCitypage::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked())
    {
        ui->label_2->show();
        ui->textEdit->show();
    }
    else
    {
        ui->label_2->hide();
        ui->textEdit->hide();
        ui->textEdit->clear();
    }
}

