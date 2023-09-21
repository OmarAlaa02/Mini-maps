#ifndef ADDCITYPAGE_H
#define ADDCITYPAGE_H

#include <QDialog>


using namespace std;
namespace Ui {
class addCitypage;
}

class addCitypage : public QDialog
{
    Q_OBJECT

public:
    explicit addCitypage(QWidget *parent = nullptr);
    ~addCitypage();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::addCitypage *ui;
    string makeData(string city,string data);
};

#endif // ADDCITYPAGE_H
