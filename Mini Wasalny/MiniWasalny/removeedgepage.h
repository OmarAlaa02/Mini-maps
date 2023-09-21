#ifndef REMOVEEDGEPAGE_H
#define REMOVEEDGEPAGE_H

#include <QDialog>

namespace Ui {
class removeEdgepage;
}

class removeEdgepage : public QDialog
{
    Q_OBJECT

public:
    explicit removeEdgepage(QWidget *parent = nullptr);
    ~removeEdgepage();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::removeEdgepage *ui;
};

#endif // REMOVEEDGEPAGE_H
