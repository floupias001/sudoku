#include "fenetre.h"

fenetre::fenetre(QWidget *parent) : QWidget(parent)
{

    grid = new grille(this);

    setFixedSize(800,500);
    bouton_quitter = new QPushButton("quitter", this);
    bouton_quitter->move(700,450);
    QObject::connect(bouton_quitter, SIGNAL(clicked()), qApp, SLOT(quit()));
    bouton_solve = new QPushButton("solve", this);
    bouton_solve->move(600,450);
    QObject::connect(bouton_solve, SIGNAL(clicked()), this, SLOT(solve()));
    bouton_init = new QPushButton("init", this);
    bouton_init->move(500, 450);
    QObject::connect(bouton_init, SIGNAL(clicked()), this, SLOT(init()));



    int i = 40;
    int j = 400;
    grid->box11->move(0, 0);
    grid->box12->move(i, 0);
    grid->box13->move(2*i, 0);
    grid->box14->move(3*i, 0);
    grid->box15->move(4*i, 0);
    grid->box16->move(5*i, 0);
    grid->box17->move(6*i, 0);
    grid->box18->move(7*i, 0);
    grid->box19->move(8*i, 0);

    grid->label11->move(j, 0);
    grid->label12->move(j + i, 0);
    grid->label13->move(j + 2*i, 0);
    grid->label14->move(j + 3*i, 0);
    grid->label15->move(j + 4*i, 0);
    grid->label16->move(j + 5*i, 0);
    grid->label17->move(j + 6*i, 0);
    grid->label18->move(j + 7*i, 0);
    grid->label19->move(j + 8*i, 0);

    grid->box21->move(0, i);
    grid->box22->move(i, i);
    grid->box23->move(2*i, i);
    grid->box24->move(3*i, i);
    grid->box25->move(4*i, i);
    grid->box26->move(5*i, i);
    grid->box27->move(6*i, i);
    grid->box28->move(7*i, i);
    grid->box29->move(8*i, i);

    grid->label21->move(j, i);
    grid->label22->move(j + i, i);
    grid->label23->move(j + 2*i, i);
    grid->label24->move(j + 3*i, i);
    grid->label25->move(j + 4*i, i);
    grid->label26->move(j + 5*i, i);
    grid->label27->move(j + 6*i, i);
    grid->label28->move(j + 7*i, i);
    grid->label29->move(j + 8*i, i);

    int ii = 2*i;

    grid->box31->move(0, ii);
    grid->box32->move(i, ii);
    grid->box33->move(2*i, ii);
    grid->box34->move(3*i, ii);
    grid->box35->move(4*i, ii);
    grid->box36->move(5*i, ii);
    grid->box37->move(6*i, ii);
    grid->box38->move(7*i, ii);
    grid->box39->move(8*i, ii);

    grid->label31->move(j, ii);
    grid->label32->move(j + i, ii);
    grid->label33->move(j + 2*i, ii);
    grid->label34->move(j + 3*i, ii);
    grid->label35->move(j + 4*i, ii);
    grid->label36->move(j + 5*i, ii);
    grid->label37->move(j + 6*i, ii);
    grid->label38->move(j + 7*i, ii);
    grid->label39->move(j + 8*i, ii);

    ii = 3*i;

    grid->box41->move(0, ii);
    grid->box42->move(i, ii);
    grid->box43->move(2*i, ii);
    grid->box44->move(3*i, ii);
    grid->box45->move(4*i, ii);
    grid->box46->move(5*i, ii);
    grid->box47->move(6*i, ii);
    grid->box48->move(7*i, ii);
    grid->box49->move(8*i, ii);

    grid->label41->move(j, ii);
    grid->label42->move(j + i, ii);
    grid->label43->move(j + 2*i, ii);
    grid->label44->move(j + 3*i, ii);
    grid->label45->move(j + 4*i, ii);
    grid->label46->move(j + 5*i, ii);
    grid->label47->move(j + 6*i, ii);
    grid->label48->move(j + 7*i, ii);
    grid->label49->move(j + 8*i, ii);

    ii = 4*i;

    grid->box51->move(0, ii);
    grid->box52->move(i, ii);
    grid->box53->move(2*i, ii);
    grid->box54->move(3*i, ii);
    grid->box55->move(4*i, ii);
    grid->box56->move(5*i, ii);
    grid->box57->move(6*i, ii);
    grid->box58->move(7*i, ii);
    grid->box59->move(8*i, ii);

    grid->label51->move(j, ii);
    grid->label52->move(j + i, ii);
    grid->label53->move(j + 2*i, ii);
    grid->label54->move(j + 3*i, ii);
    grid->label55->move(j + 4*i, ii);
    grid->label56->move(j + 5*i, ii);
    grid->label57->move(j + 6*i, ii);
    grid->label58->move(j + 7*i, ii);
    grid->label59->move(j + 8*i, ii);

    ii = 5*i;
    grid->box61->move(0, ii);
    grid->box62->move(i, ii);
    grid->box63->move(2*i, ii);
    grid->box64->move(3*i, ii);
    grid->box65->move(4*i, ii);
    grid->box66->move(5*i, ii);
    grid->box67->move(6*i, ii);
    grid->box68->move(7*i, ii);
    grid->box69->move(8*i, ii);

    grid->label61->move(j, ii);
    grid->label62->move(j + i, ii);
    grid->label63->move(j + 2*i, ii);
    grid->label64->move(j + 3*i, ii);
    grid->label65->move(j + 4*i, ii);
    grid->label66->move(j + 5*i, ii);
    grid->label67->move(j + 6*i, ii);
    grid->label68->move(j + 7*i, ii);
    grid->label69->move(j + 8*i, ii);

    ii = 6*i;
    grid->box71->move(0, ii);
    grid->box72->move(i, ii);
    grid->box73->move(2*i, ii);
    grid->box74->move(3*i, ii);
    grid->box75->move(4*i, ii);
    grid->box76->move(5*i, ii);
    grid->box77->move(6*i, ii);
    grid->box78->move(7*i, ii);
    grid->box79->move(8*i, ii);

    grid->label71->move(j, ii);
    grid->label72->move(j + i, ii);
    grid->label73->move(j + 2*i, ii);
    grid->label74->move(j + 3*i, ii);
    grid->label75->move(j + 4*i, ii);
    grid->label76->move(j + 5*i, ii);
    grid->label77->move(j + 6*i, ii);
    grid->label78->move(j + 7*i, ii);
    grid->label79->move(j + 8*i, ii);

    ii = 7*i;
    grid->box81->move(0, ii);
    grid->box82->move(i, ii);
    grid->box83->move(2*i, ii);
    grid->box84->move(3*i, ii);
    grid->box85->move(4*i, ii);
    grid->box86->move(5*i, ii);
    grid->box87->move(6*i, ii);
    grid->box88->move(7*i, ii);
    grid->box89->move(8*i, ii);

    grid->label81->move(j, ii);
    grid->label82->move(j + i, ii);
    grid->label83->move(j + 2*i, ii);
    grid->label84->move(j + 3*i, ii);
    grid->label85->move(j + 4*i, ii);
    grid->label86->move(j + 5*i, ii);
    grid->label87->move(j + 6*i, ii);
    grid->label88->move(j + 7*i, ii);
    grid->label89->move(j + 8*i, ii);

    ii = 8*i;
    grid->box91->move(0, ii);
    grid->box92->move(i, ii);
    grid->box93->move(2*i, ii);
    grid->box94->move(3*i, ii);
    grid->box95->move(4*i, ii);
    grid->box96->move(5*i, ii);
    grid->box97->move(6*i, ii);
    grid->box98->move(7*i, ii);
    grid->box99->move(8*i, ii);

    grid->label91->move(j, ii);
    grid->label92->move(j + i, ii);
    grid->label93->move(j + 2*i, ii);
    grid->label94->move(j + 3*i, ii);
    grid->label95->move(j + 4*i, ii);
    grid->label96->move(j + 5*i, ii);
    grid->label97->move(j + 6*i, ii);
    grid->label98->move(j + 7*i, ii);
    grid->label99->move(j + 8*i, ii);

}


fenetre::~fenetre(){
    delete bouton_quitter;
    delete bouton_solve;

    delete grid;


}



