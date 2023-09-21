
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addgraphpage.h"
#include "graph.h"
#include "displaygraphpage.h"
#include "deletegraphpage.h"
#include "shortestpath.h"
#include "editgraphpage.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    addGraphPage *addG;
    displayGraphpage * displayG;
    deleteGraphpage *deleteG;
    shortestPath *sh;
    editGraphpage *editG;
    Graph g;
};

#endif // MAINWINDOW_H
