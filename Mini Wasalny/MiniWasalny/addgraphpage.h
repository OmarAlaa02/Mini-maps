#ifndef ADDGRAPHPAGE_H
#define ADDGRAPHPAGE_H

#include <QDialog>

namespace Ui {
class addGraphPage;
}

class addGraphPage : public QDialog
{
    Q_OBJECT

public:
    explicit addGraphPage(QWidget *parent = nullptr);
    ~addGraphPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addGraphPage *ui;
};

#endif // ADDGRAPHPAGE_H
