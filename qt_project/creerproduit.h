#ifndef CREERPRODUIT_H
#define CREERPRODUIT_H

#include <QMainWindow>

namespace Ui {
class creerproduit;
}

class creerproduit : public QMainWindow
{
    Q_OBJECT

public:
    explicit creerproduit(QWidget *parent = nullptr);
    ~creerproduit();

private:
    Ui::creerproduit *ui;
};

#endif // CREERPRODUIT_H
