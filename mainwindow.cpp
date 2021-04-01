#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLineSeries>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QLineSeries *series = new QLineSeries();
    *series << QPointF(11, 1)
            << QPointF(13, 3)
            << QPointF(17, 6)
            << QPointF(18, 3)
            << QPointF(20, 2);


    //zhehsishenme

    //这是我第二次在fun2中修改

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Simple line chart example");

    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
}

MainWindow::~MainWindow()
{
    delete ui;
}
