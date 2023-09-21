#include "shortestpath.h"
#include "ui_shortestpath.h"
#include "graph.h"
#include <queue>
#include <qmessagebox.h>
shortestPath::shortestPath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shortestPath)
{
    ui->setupUi(this);
    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
}

shortestPath::~shortestPath()
{
    delete ui;
}


void shortestPath::Dijkstra(string src,string graph_name)
{
    dist[src]=0;
    par[src]="null";
    // cost node
    priority_queue<pair<int,string>>pq;
    pq.push({0,src});

    while(!pq.empty())
    {
        string node=pq.top().second;
        int cost = -pq.top().first;
        pq.pop();

        for(auto &[u,c]:Graph::graphs[graph_name][node])
        {
            int newcost=cost+c;

            if(newcost < dist[u])
            {
                dist[u]=newcost;
                par[u]=node;
                pq.push({-newcost,u});
            }
        }
    }

}


void shortestPath::on_pushButton_clicked()
{
    string src=ui->comboBox_2->currentText().toStdString();
    string dest=ui->comboBox_3->currentText().toStdString();
    string graph_name=ui->comboBox->currentText().toStdString();

    for(auto &it:Graph::graphs[graph_name])
        dist[it.first]=1e9;



    Dijkstra(src,graph_name);


    if(dist[dest]==1e9)
    {
        QMessageBox::information(this,"","No path found");
        return;
    }
    QString tmp;
    QMessageBox::information(this,"distance","distance is " + tmp.number(dist[dest]));

    printPath(dest);
}


void shortestPath::on_comboBox_currentTextChanged(const QString &arg1)
{
    string graph_name=arg1.toStdString();
    ui->comboBox_2->clear();
    ui->comboBox_3->clear();
    for(auto &it:Graph::graphs[graph_name])
    {
        ui->comboBox_2->addItem(QString::fromStdString(it.first));
        ui->comboBox_3->addItem(QString::fromStdString(it.first));
    }
}

void shortestPath::printPath(string cur)
{
    vector<string> s;
    while(par[cur]!="null")
    {
        s.push_back(cur);
        s.push_back("->");
        cur=par[cur];
    }

    s.push_back(cur);

    reverse(s.begin(),s.end());
    string tmp="";

    for(string &t:s)
    {
        tmp+=t+' ';
    }


    ui->textEdit->setText(QString::fromStdString(tmp));
}
