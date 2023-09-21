#include "removeedgepage.h"
#include "ui_removeedgepage.h"
#include "graph.h"
removeEdgepage::removeEdgepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removeEdgepage)
{
    ui->setupUi(this);

    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
}

removeEdgepage::~removeEdgepage()
{
    delete ui;
}

void removeEdgepage::on_comboBox_currentTextChanged(const QString &arg1)
{
    string graph_name=arg1.toStdString();
    ui->comboBox_2->clear();

    for(auto &it:Graph::graphs[graph_name])
    {
        for(auto &it2:it.second)
        {
            string tmp=it.first + ' ' + it2.first + ' ' +to_string(it2.second);
            ui->comboBox_2->addItem(QString::fromStdString(tmp));
        }
    }
}


void removeEdgepage::on_pushButton_clicked()
{
    string graph_name=ui->comboBox->currentText().toStdString();
    string edge=ui->comboBox_2->currentText().toStdString()+'\n';
    string city1,city2,cost;
    string tmp="";
    int spaceCntr=0;

    for(char &c:edge)
    {
        if(c==' ')
        {
            spaceCntr++;
            if(spaceCntr==1)
                city1=tmp;
            else
                city2=tmp;
            tmp="";
        }
        else if(c=='\n')
            cost=tmp;
        else
            tmp+=c;
    }



    for(auto &it:Graph::graphs[graph_name])
    {
        for(int i=0;i<it.second.size();i++)
        {
            if(it.first==city1 && it.second[i].first==city2 && to_string(it.second[i].second)==cost)
            {
                it.second.erase(it.second.begin()+i);


                //update

                ui->comboBox_2->clear();
                for(auto &it2:Graph::graphs[graph_name])
                {
                    for(auto &it3:it2.second)
                    {
                        string tmp=it2.first + ' ' + it3.first + ' ' +to_string(it3.second);
                        ui->comboBox_2->addItem(QString::fromStdString(tmp));
                    }
                }

                return;
            }
        }
    }
}

