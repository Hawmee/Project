#include "creerproduit.h"
#include "ui_creerproduit.h"

creerproduit::creerproduit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::creerproduit)
{
    ui->setupUi(this);
}

creerproduit::~creerproduit()
{
    delete ui;
}
