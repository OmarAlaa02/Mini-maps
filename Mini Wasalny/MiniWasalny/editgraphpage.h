#ifndef EDITGRAPHPAGE_H
#define EDITGRAPHPAGE_H

#include <QDialog>
#include "addedgepage.h"
#include "addcitypage.h"
#include "removecitypage.h"
#include "removeedgepage.h"

namespace Ui {
class editGraphpage;
}

class editGraphpage : public QDialog
{
    Q_OBJECT

public:
    explicit editGraphpage(QWidget *parent = nullptr);
    ~editGraphpage();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::editGraphpage *ui;
    addEdgepage *addE;
    addCitypage *addC;
    removeCitypage *removeC;
    removeEdgepage *removeE;
};

#endif // EDITGRAPHPAGE_H
