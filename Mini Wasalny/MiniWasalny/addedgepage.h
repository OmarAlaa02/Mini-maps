#ifndef ADDEDGEPAGE_H
#define ADDEDGEPAGE_H

#include <QDialog>

namespace Ui {
class addEdgepage;
}

class addEdgepage : public QDialog
{
    Q_OBJECT

public:
    explicit addEdgepage(QWidget *parent = nullptr);
    ~addEdgepage();

private slots:

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::addEdgepage *ui;
};

#endif // ADDEDGEPAGE_H
