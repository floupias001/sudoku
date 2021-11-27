#ifndef FENETRE_H
#define FENETRE_H

#include "myspinbox.h"
#include <QWidget>
#include <QPushButton>
#include <QApplication>
#include <QSpinBox>
#include "mylabel.h"
#include "grille.h"
#include <QSignalBlocker>
#include <iostream>
#include <vector>

class fenetre : public QWidget
{
    Q_OBJECT

public slots :
    void solve();
    void init();

public:
    fenetre(QWidget *parent = nullptr);
    ~fenetre();
    //void readvalue();
    void writevalue();

    grille *grid;
    QPushButton *bouton_quitter;
    QPushButton *bouton_solve;
    QPushButton *bouton_init;




};
#endif // FENETRE_H
