#ifndef CACLULATOR_H
#define CACLULATOR_H

#include <QMainWindow>

namespace Ui {
class Caclulator;
}

class Caclulator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Caclulator(QWidget *parent = 0);
    ~Caclulator();

private:
    Ui::Caclulator *ui;
};

#endif // CACLULATOR_H
