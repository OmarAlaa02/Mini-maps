#include "addgraphpage.h"
#include "ui_addgraphpage.h"
#include "graph.h"
#include <QMessageBox>

addGraphPage::addGraphPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addGraphPage)
{
    ui->setupUi(this);
}

addGraphPage::~addGraphPage()
{
    delete ui;
}

void addGraphPage::on_pushButton_clicked()
{
    string graph_name=ui->lineEdit->text().toStdString();
    string graph_data=ui->textEdit->toPlainText().toStdString();

    if(Graph::graphs.find(graph_name)!=Graph::graphs.end())
    {
        QMessageBox::warning(this,"Duplicate graph name","A graph of the same name already added");
        return;
    }

    Graph::addGraph(graph_name,graph_data,ui->checkBox->isChecked());
}

