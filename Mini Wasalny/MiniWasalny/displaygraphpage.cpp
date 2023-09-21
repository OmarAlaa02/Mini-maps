#include "displaygraphpage.h"
#include "ui_displaygraphpage.h"
#include "graph.h"

using namespace std;
displayGraphpage::displayGraphpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displayGraphpage)
{
    ui->setupUi(this);

    for(auto &it:Graph::graphs)
    {
        ui->comboBox->addItem(QString::fromStdString(it.first));
    }
}

displayGraphpage::~displayGraphpage()
{
    delete ui;
}

void displayGraphpage::on_comboBox_currentTextChanged(const QString &arg1)
{
    string graph_name=arg1.toStdString();
    string graph_data="Cities: \n";

    for(auto &it:Graph::graphs[graph_name])
        graph_data+=it.first+' ';

    graph_data+="\n\nEdges: \n";

    int tmpSize=graph_data.size();

    for(auto &it:Graph::graphs[graph_name])
    {
        for(auto &it2:it.second)
        {
            graph_data+=it.first + ' '+it2.first+' '+to_string(it2.second)+'\n';
        }
    }

    if(graph_data.size()==tmpSize)
    {
        graph_data+="No edges \n";
    }

    ui->textEdit->setText(QString::fromStdString(graph_data));
}

