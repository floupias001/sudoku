#ifndef FENETRE_H
#define FENETRE_H

#include "myspinbox.h"
#include <QWidget>
#include <QPushButton>
#include <QApplication>
#include <QSpinBox>
#include <QLabel>
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
    void readvalue();
    void writevalue();

    grille *grid;
    QPushButton *bouton_quitter;
    QPushButton *bouton_solve;
    QPushButton *bouton_init;

    myspinbox *box11;
    QLabel *label11;
    myspinbox *box12;
    QLabel *label12;
    myspinbox *box13;
    QLabel *label13;
    myspinbox *box14;
    QLabel *label14;
    myspinbox *box15;
    QLabel *label15;
    myspinbox *box16;
    QLabel *label16;
    myspinbox *box17;
    QLabel *label17;
    myspinbox *box18;
    QLabel *label18;
    myspinbox *box19;
    QLabel *label19;

    myspinbox *box21;
    QLabel *label21;
    myspinbox *box22;
    QLabel *label22;
    myspinbox *box23;
    QLabel *label23;
    myspinbox *box24;
    QLabel *label24;
    myspinbox *box25;
    QLabel *label25;
    myspinbox *box26;
    QLabel *label26;
    myspinbox *box27;
    QLabel *label27;
    myspinbox *box28;
    QLabel *label28;
    myspinbox *box29;
    QLabel *label29;

    myspinbox *box31;
    QLabel *label31;
    myspinbox *box32;
    QLabel *label32;
    myspinbox *box33;
    QLabel *label33;
    myspinbox *box34;
    QLabel *label34;
    myspinbox *box35;
    QLabel *label35;
    myspinbox *box36;
    QLabel *label36;
    myspinbox *box37;
    QLabel *label37;
    myspinbox *box38;
    QLabel *label38;
    myspinbox *box39;
    QLabel *label39;

    myspinbox *box41;
    QLabel *label41;
    myspinbox *box42;
    QLabel *label42;
    myspinbox *box43;
    QLabel *label43;
    myspinbox *box44;
    QLabel *label44;
    myspinbox *box45;
    QLabel *label45;
    myspinbox *box46;
    QLabel *label46;
    myspinbox *box47;
    QLabel *label47;
    myspinbox *box48;
    QLabel *label48;
    myspinbox *box49;
    QLabel *label49;

    myspinbox *box51;
    QLabel *label51;
    myspinbox *box52;
    QLabel *label52;
    myspinbox *box53;
    QLabel *label53;
    myspinbox *box54;
    QLabel *label54;
    myspinbox *box55;
    QLabel *label55;
    myspinbox *box56;
    QLabel *label56;
    myspinbox *box57;
    QLabel *label57;
    myspinbox *box58;
    QLabel *label58;
    myspinbox *box59;
    QLabel *label59;

    myspinbox *box61;
    QLabel *label61;
    myspinbox *box62;
    QLabel *label62;
    myspinbox *box63;
    QLabel *label63;
    myspinbox *box64;
    QLabel *label64;
    myspinbox *box65;
    QLabel *label65;
    myspinbox *box66;
    QLabel *label66;
    myspinbox *box67;
    QLabel *label67;
    myspinbox *box68;
    QLabel *label68;
    myspinbox *box69;
    QLabel *label69;

    myspinbox *box71;
    QLabel *label71;
    myspinbox *box72;
    QLabel *label72;
    myspinbox *box73;
    QLabel *label73;
    myspinbox *box74;
    QLabel *label74;
    myspinbox *box75;
    QLabel *label75;
    myspinbox *box76;
    QLabel *label76;
    myspinbox *box77;
    QLabel *label77;
    myspinbox *box78;
    QLabel *label78;
    myspinbox *box79;
    QLabel *label79;

    myspinbox *box81;
    QLabel *label81;
    myspinbox *box82;
    QLabel *label82;
    myspinbox *box83;
    QLabel *label83;
    myspinbox *box84;
    QLabel *label84;
    myspinbox *box85;
    QLabel *label85;
    myspinbox *box86;
    QLabel *label86;
    myspinbox *box87;
    QLabel *label87;
    myspinbox *box88;
    QLabel *label88;
    myspinbox *box89;
    QLabel *label89;

    myspinbox *box91;
    QLabel *label91;
    myspinbox *box92;
    QLabel *label92;
    myspinbox *box93;
    QLabel *label93;
    myspinbox *box94;
    QLabel *label94;
    myspinbox *box95;
    QLabel *label95;
    myspinbox *box96;
    QLabel *label96;
    myspinbox *box97;
    QLabel *label97;
    myspinbox *box98;
    QLabel *label98;
    myspinbox *box99;
    QLabel *label99;


};
#endif // FENETRE_H
