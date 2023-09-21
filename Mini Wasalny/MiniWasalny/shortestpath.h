#ifndef SHORTESTPATH_H
#define SHORTESTPATH_H

#include <QDialog>

using namespace std;
namespace Ui {
class shortestPath;
}

class shortestPath : public QDialog
{
    Q_OBJECT

public:
    explicit shortestPath(QWidget *parent = nullptr);
    ~shortestPath();

private slots:


    void on_pushButton_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::shortestPath *ui;
    void Dijkstra(string src,string graph_name);
    void printPath(string cur);
    unordered_map<string,int>dist;
    unordered_map<string,string>par;
};

#endif // SHORTESTPATH_H
