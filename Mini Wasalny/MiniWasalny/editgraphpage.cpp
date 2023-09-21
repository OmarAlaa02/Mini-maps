#include "editgraphpage.h"
#include "ui_editgraphpage.h"

editGraphpage::editGraphpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editGraphpage)
{
    ui->setupUi(this);

}

editGraphpage::~editGraphpage()
{
    delete ui;
    delete addE;
    delete addC;
    delete removeC;
    delete removeE;
}

void editGraphpage::on_pushButton_2_clicked()
{
    addE=new addEdgepage();
    addE->show();
}


void editGraphpage::on_pushButton_clicked()
{
    addC =new addCitypage();
    addC->show();
}


void editGraphpage::on_pushButton_4_clicked()
{
    removeC=new removeCitypage();
    removeC->show();
}


void editGraphpage::on_pushButton_3_clicked()
{
    removeE=new removeEdgepage();
    removeE->show();
}

