#include "caclulator.h"
#include "ui_caclulator.h"

Caclulator::Caclulator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Caclulator)
{
    ui->setupUi(this);
}

Caclulator::~Caclulator()
{
    delete ui;
}
