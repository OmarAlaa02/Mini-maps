#include "removecitypage.h"
#include "ui_removecitypage.h"
#include "graph.h"
#include <QMessageBox>
#include "deletegraphpage.h"

removeCitypage::removeCitypage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removeCitypage)
{
    ui->setupUi(this);
    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
}

removeCitypage::~removeCitypage()
{
    delete ui;
}

void removeCitypage::on_pushButton_clicked()
{
    string graph_name=ui->comboBox->currentText().toStdString();
    string city_name=ui->comboBox_2->currentText().toStdString();

    if(Graph::graphs[graph_name].size()==1)
    {
        if(QMessageBox::warning(this,"one city remaining","This is the last city do you want to delete graph ?"
                                 ,QMessageBox::Yes | QMessageBox::No)==QMessageBox::Yes)
        {
            Graph::graphs.erase(graph_name);
        }

        //return to last page.........................................


        return;
    }

    Graph::graphs[graph_name].erase(city_name);

    for(auto &it:Graph::graphs[graph_name])
    {
        for(int i=0;i<it.second.size();i++)
        {
            if(it.second[i].first==city_name)
            {
                it.second.erase(it.second.begin()+i);
                i--;
            }
        }
    }

//    string test="";

//    for(auto &it:Graph::graphs[graph_name])
//        test+=it.first+' ';

//    QMessageBox::information(this,"",QString::fromStdString(test));


    ui->comboBox_2->clear();
    for(auto &it:Graph::graphs[graph_name])
        ui->comboBox_2->addItem(QString::fromStdString(it.first));
}


void removeCitypage::on_comboBox_currentTextChanged(const QString &arg1)
{
    string graph_name=arg1.toStdString();
    ui->comboBox_2->clear();

    for(auto &it:Graph::graphs[graph_name])
    {
        ui->comboBox_2->addItem(QString::fromStdString(it.first));
    }
}

