#ifndef DISPLAYGRAPHPAGE_H
#define DISPLAYGRAPHPAGE_H

#include <QDialog>

namespace Ui {
class displayGraphpage;
}

class displayGraphpage : public QDialog
{
    Q_OBJECT

public:
    explicit displayGraphpage(QWidget *parent = nullptr);
    ~displayGraphpage();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::displayGraphpage *ui;
};

#endif // DISPLAYGRAPHPAGE_H
