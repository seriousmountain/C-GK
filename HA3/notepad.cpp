#include "notepad.h"
#include "ui_notepad.h"

Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionSave_triggered()
{

}

void Notepad::on_actionNew_triggered()
{

}

void Notepad::on_actionOpen_triggered()
{

}

void Notepad::on_actionSave_as_triggered()
{

}

void Notepad::on_actionPrint_triggered()
{

}

void Notepad::on_actionExit_triggered()
{

}

void Notepad::on_actionCopy_triggered()
{

}

void Notepad::on_actionCut_triggered()
{

}

void Notepad::on_actionPaste_triggered()
{

}

void Notepad::on_actionUndo_triggered()
{

}

void Notepad::on_actionRedo_triggered()
{

}

void Notepad::on_actionFont_triggered()
{

}
