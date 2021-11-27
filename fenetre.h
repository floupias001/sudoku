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

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

class fenetre : public QWidget
{
    Q_OBJECT

public slots :
    void solve();
    void init();
    void test();

public:
    fenetre(QWidget *parent = nullptr);
    ~fenetre();
    //void readvalue();
    void writevalue();

    grille *grid;
    QPushButton *bouton_quitter;
    QPushButton *bouton_solve;
    QPushButton *bouton_init;
    QPushButton *bouton_test;




};
#endif // FENETRE_H
