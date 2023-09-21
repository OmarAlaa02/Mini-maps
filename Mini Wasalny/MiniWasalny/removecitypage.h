#ifndef REMOVECITYPAGE_H
#define REMOVECITYPAGE_H

#include <QDialog>

namespace Ui {
class removeCitypage;
}

class removeCitypage : public QDialog
{
    Q_OBJECT

public:
    explicit removeCitypage(QWidget *parent = nullptr);
    ~removeCitypage();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::removeCitypage *ui;
};

#endif // REMOVECITYPAGE_H
