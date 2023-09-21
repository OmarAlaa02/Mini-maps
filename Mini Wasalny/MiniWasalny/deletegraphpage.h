#ifndef DELETEGRAPHPAGE_H
#define DELETEGRAPHPAGE_H

#include <QDialog>

namespace Ui {
class deleteGraphpage;
}

class deleteGraphpage : public QDialog
{
    Q_OBJECT

public:
    explicit deleteGraphpage(QWidget *parent = nullptr);
    ~deleteGraphpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deleteGraphpage *ui;
};

#endif // DELETEGRAPHPAGE_H
