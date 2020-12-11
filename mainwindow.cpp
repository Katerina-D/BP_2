#include <QMouseEvent>

#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    representer = new Representer();
	manager = new Manager();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete representer;
	delete manager;
}

void MainWindow::paintEvent(QPaintEvent* paint_event)
{
	representer->representFigures(this, manager->getFigures());

    QMainWindow::paintEvent(paint_event);
}

void MainWindow::mousePressEvent(QMouseEvent* mouse_event)
{
	if (mouse_event->button() == Qt::LeftButton)
		manager->addFigure(Coordinates{mouse_event->x(), mouse_event->y()});

	else if (mouse_event->button() == Qt::RightButton)
		manager->deleteFigure(Coordinates{mouse_event->x(), mouse_event->y()});

    repaint();

    QMainWindow::mousePressEvent(mouse_event);
}
