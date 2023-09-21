
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <string>
#include <QMessageBox>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //read from files
    ifstream file("graphs.txt");

    string s, graph_data,graph_name;
    while(getline(file,s))
    {
        if(s == "")
            continue;


        graph_name=s;
        graph_data="";

        getline(file,s);

        int cities=stoi(s);

        for(int i=0;i<cities;i++)
        {
            getline(file,s);
            Graph::graphs[graph_name][s];
        }

        getline(file,s);

        int edges=stoi(s);

        for(int i=0;i<edges;i++)
        {
            getline(file,s);
            graph_data+=s+'\n';
        }

        Graph::addGraph(graph_name,graph_data,1);
    }

    file.close();
}

MainWindow::~MainWindow()
{
    //save to file
    ofstream file("graphs.txt");

    for(auto &it:Graph::graphs)
    {
        file <<it.first +"\n";
        int size=it.second.size();

        file<< to_string(size) +  "\n";

        for(auto &it2:it.second)
        {
            file << it2.first +'\n';
        }


        size=0;
        for(auto &g:it.second)
        {
            size+=g.second.size();
        }

        file<< to_string(size) +  "\n";

        for(auto &g:it.second)
        {
            for(auto &i:g.second)
            {
                file << g.first + ' ' + i.first + ' ' + to_string(i.second) + '\n';
            }
        }
    }

    file.close();

    delete ui;
    delete displayG;
    delete addG;
    delete deleteG;
    delete sh;
    delete editG;
}



void MainWindow::on_pushButton_clicked()
{
    addG=new addGraphPage();
    addG->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    if(Graph::graphs.empty())
    {
        QMessageBox::warning(this,"","No available graphs");
        return;
    }
    displayG =new displayGraphpage();
    displayG->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    if(Graph::graphs.empty())
    {
        QMessageBox::warning(this,"","No available graphs");
        return;
    }
    deleteG =new deleteGraphpage();
    deleteG->show();
}



void MainWindow::on_pushButton_4_clicked()
{
    if(Graph::graphs.empty())
    {
        QMessageBox::warning(this,"","No available graphs");
        return;
    }
    sh=new shortestPath();
    sh->show();
}


void MainWindow::on_pushButton_5_clicked()
{
    if(Graph::graphs.empty())
    {
        QMessageBox::warning(this,"","No available graphs");
        return;
    }
    editG=new editGraphpage();
    editG->show();
}

