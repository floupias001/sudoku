#ifndef GRILLE_H
#define GRILLE_H

#include "mycase.h"
#include <iostream>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

class grille
{
public:
    grille(QWidget* fenetre_);
    ~grille();
    int test(int nb);
    int test_colonne(int nb);
    int test_ligne(int nb);
    int test_bloc(int nb);
    QWidget* fenetre;
    mycase* liste[81];

    mycase* case11;
    mycase* case12;
    mycase* case13;
    mycase* case14;
    mycase* case15;
    mycase* case16;
    mycase* case17;
    mycase* case18;
    mycase* case19;
    mycase* case21;
    mycase* case22;
    mycase* case23;
    mycase* case24;
    mycase* case25;
    mycase* case26;
    mycase* case27;
    mycase* case28;
    mycase* case29;
    mycase* case31;
    mycase* case32;
    mycase* case33;
    mycase* case34;
    mycase* case35;
    mycase* case36;
    mycase* case37;
    mycase* case38;
    mycase* case39;
    mycase* case41;
    mycase* case42;
    mycase* case43;
    mycase* case44;
    mycase* case45;
    mycase* case46;
    mycase* case47;
    mycase* case48;
    mycase* case49;
    mycase* case51;
    mycase* case52;
    mycase* case53;
    mycase* case54;
    mycase* case55;
    mycase* case56;
    mycase* case57;
    mycase* case58;
    mycase* case59;
    mycase* case61;
    mycase* case62;
    mycase* case63;
    mycase* case64;
    mycase* case65;
    mycase* case66;
    mycase* case67;
    mycase* case68;
    mycase* case69;
    mycase* case71;
    mycase* case72;
    mycase* case73;
    mycase* case74;
    mycase* case75;
    mycase* case76;
    mycase* case77;
    mycase* case78;
    mycase* case79;
    mycase* case81;
    mycase* case82;
    mycase* case83;
    mycase* case84;
    mycase* case85;
    mycase* case86;
    mycase* case87;
    mycase* case88;
    mycase* case89;
    mycase* case91;
    mycase* case92;
    mycase* case93;
    mycase* case94;
    mycase* case95;
    mycase* case96;
    mycase* case97;
    mycase* case98;
    mycase* case99;

    myspinbox *box11;
    mylabel *label11;
    myspinbox *box12;
    mylabel *label12;
    myspinbox *box13;
    mylabel *label13;
    myspinbox *box14;
    mylabel *label14;
    myspinbox *box15;
    mylabel *label15;
    myspinbox *box16;
    mylabel *label16;
    myspinbox *box17;
    mylabel *label17;
    myspinbox *box18;
    mylabel *label18;
    myspinbox *box19;
    mylabel *label19;

    myspinbox *box21;
    mylabel *label21;
    myspinbox *box22;
    mylabel *label22;
    myspinbox *box23;
    mylabel *label23;
    myspinbox *box24;
    mylabel *label24;
    myspinbox *box25;
    mylabel *label25;
    myspinbox *box26;
    mylabel *label26;
    myspinbox *box27;
    mylabel *label27;
    myspinbox *box28;
    mylabel *label28;
    myspinbox *box29;
    mylabel *label29;

    myspinbox *box31;
    mylabel *label31;
    myspinbox *box32;
    mylabel *label32;
    myspinbox *box33;
    mylabel *label33;
    myspinbox *box34;
    mylabel *label34;
    myspinbox *box35;
    mylabel *label35;
    myspinbox *box36;
    mylabel *label36;
    myspinbox *box37;
    mylabel *label37;
    myspinbox *box38;
    mylabel *label38;
    myspinbox *box39;
    mylabel *label39;

    myspinbox *box41;
    mylabel *label41;
    myspinbox *box42;
    mylabel *label42;
    myspinbox *box43;
    mylabel *label43;
    myspinbox *box44;
    mylabel *label44;
    myspinbox *box45;
    mylabel *label45;
    myspinbox *box46;
    mylabel *label46;
    myspinbox *box47;
    mylabel *label47;
    myspinbox *box48;
    mylabel *label48;
    myspinbox *box49;
    mylabel *label49;

    myspinbox *box51;
    mylabel *label51;
    myspinbox *box52;
    mylabel *label52;
    myspinbox *box53;
    mylabel *label53;
    myspinbox *box54;
    mylabel *label54;
    myspinbox *box55;
    mylabel *label55;
    myspinbox *box56;
    mylabel *label56;
    myspinbox *box57;
    mylabel *label57;
    myspinbox *box58;
    mylabel *label58;
    myspinbox *box59;
    mylabel *label59;

    myspinbox *box61;
    mylabel *label61;
    myspinbox *box62;
    mylabel *label62;
    myspinbox *box63;
    mylabel *label63;
    myspinbox *box64;
    mylabel *label64;
    myspinbox *box65;
    mylabel *label65;
    myspinbox *box66;
    mylabel *label66;
    myspinbox *box67;
    mylabel *label67;
    myspinbox *box68;
    mylabel *label68;
    myspinbox *box69;
    mylabel *label69;

    myspinbox *box71;
    mylabel *label71;
    myspinbox *box72;
    mylabel *label72;
    myspinbox *box73;
    mylabel *label73;
    myspinbox *box74;
    mylabel *label74;
    myspinbox *box75;
    mylabel *label75;
    myspinbox *box76;
    mylabel *label76;
    myspinbox *box77;
    mylabel *label77;
    myspinbox *box78;
    mylabel *label78;
    myspinbox *box79;
    mylabel *label79;

    myspinbox *box81;
    mylabel *label81;
    myspinbox *box82;
    mylabel *label82;
    myspinbox *box83;
    mylabel *label83;
    myspinbox *box84;
    mylabel *label84;
    myspinbox *box85;
    mylabel *label85;
    myspinbox *box86;
    mylabel *label86;
    myspinbox *box87;
    mylabel *label87;
    myspinbox *box88;
    mylabel *label88;
    myspinbox *box89;
    mylabel *label89;

    myspinbox *box91;
    mylabel *label91;
    myspinbox *box92;
    mylabel *label92;
    myspinbox *box93;
    mylabel *label93;
    myspinbox *box94;
    mylabel *label94;
    myspinbox *box95;
    mylabel *label95;
    myspinbox *box96;
    mylabel *label96;
    myspinbox *box97;
    mylabel *label97;
    myspinbox *box98;
    mylabel *label98;
    myspinbox *box99;
    mylabel *label99;
};

#endif // GRILLE_H
