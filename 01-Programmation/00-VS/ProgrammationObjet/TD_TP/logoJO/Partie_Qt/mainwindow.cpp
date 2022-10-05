#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent*)
   {
	QPainter painter(this);
	QPen pen = painter.pen();
	pen.setWidth(10);          // épaisseur du stylo

	// Exemple d'affichage d'un cercle vert de rayon 100 en (200,200)
	pen.setColor(0x00FF00); // couleur du stylo
	painter.setPen(pen);    // on utilise ce stylo pour dessiner
	painter.drawEllipse(QPointF(200,200), 100, 100);


	// Affichage du logo des JO
	//...

   }
