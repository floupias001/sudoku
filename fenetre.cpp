#include "fenetre.h"

fenetre::fenetre(QWidget *parent) : QWidget(parent)
{

    grid = new grille();

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

    box11 = new myspinbox(this);
    box12 = new myspinbox(this);
    box13 = new myspinbox(this);
    box14 = new myspinbox(this);
    box15 = new myspinbox(this);
    box16 = new myspinbox(this);
    box17 = new myspinbox(this);
    box18 = new myspinbox(this);
    box19 = new myspinbox(this);
    label11 = new QLabel(this);
    label12 = new QLabel(this);
    label13 = new QLabel(this);
    label14 = new QLabel(this);
    label15 = new QLabel(this);
    label16 = new QLabel(this);
    label17 = new QLabel(this);
    label18 = new QLabel(this);
    label19 = new QLabel(this);

    box21 = new myspinbox(this);
    box22 = new myspinbox(this);
    box23 = new myspinbox(this);
    box24 = new myspinbox(this);
    box25 = new myspinbox(this);
    box26 = new myspinbox(this);
    box27 = new myspinbox(this);
    box28 = new myspinbox(this);
    box29 = new myspinbox(this);
    label21 = new QLabel(this);
    label22 = new QLabel(this);
    label23 = new QLabel(this);
    label24 = new QLabel(this);
    label25 = new QLabel(this);
    label26 = new QLabel(this);
    label27 = new QLabel(this);
    label28 = new QLabel(this);
    label29 = new QLabel(this);

    box31 = new myspinbox(this);
    box32 = new myspinbox(this);
    box33 = new myspinbox(this);
    box34 = new myspinbox(this);
    box35 = new myspinbox(this);
    box36 = new myspinbox(this);
    box37 = new myspinbox(this);
    box38 = new myspinbox(this);
    box39 = new myspinbox(this);
    label31 = new QLabel(this);
    label32 = new QLabel(this);
    label33 = new QLabel(this);
    label34 = new QLabel(this);
    label35 = new QLabel(this);
    label36 = new QLabel(this);
    label37 = new QLabel(this);
    label38 = new QLabel(this);
    label39 = new QLabel(this);

    box41 = new myspinbox(this);
    box42 = new myspinbox(this);
    box43 = new myspinbox(this);
    box44 = new myspinbox(this);
    box45 = new myspinbox(this);
    box46 = new myspinbox(this);
    box47 = new myspinbox(this);
    box48 = new myspinbox(this);
    box49 = new myspinbox(this);
    label41 = new QLabel(this);
    label42 = new QLabel(this);
    label43 = new QLabel(this);
    label44 = new QLabel(this);
    label45 = new QLabel(this);
    label46 = new QLabel(this);
    label47 = new QLabel(this);
    label48 = new QLabel(this);
    label49 = new QLabel(this);

    box51 = new myspinbox(this);
    box52 = new myspinbox(this);
    box53 = new myspinbox(this);
    box54 = new myspinbox(this);
    box55 = new myspinbox(this);
    box56 = new myspinbox(this);
    box57 = new myspinbox(this);
    box58 = new myspinbox(this);
    box59 = new myspinbox(this);
    label51 = new QLabel(this);
    label52 = new QLabel(this);
    label53 = new QLabel(this);
    label54 = new QLabel(this);
    label55 = new QLabel(this);
    label56 = new QLabel(this);
    label57 = new QLabel(this);
    label58 = new QLabel(this);
    label59 = new QLabel(this);

    box61 = new myspinbox(this);
    box62 = new myspinbox(this);
    box63 = new myspinbox(this);
    box64 = new myspinbox(this);
    box65 = new myspinbox(this);
    box66 = new myspinbox(this);
    box67 = new myspinbox(this);
    box68 = new myspinbox(this);
    box69 = new myspinbox(this);
    label61 = new QLabel(this);
    label62 = new QLabel(this);
    label63 = new QLabel(this);
    label64 = new QLabel(this);
    label65 = new QLabel(this);
    label66 = new QLabel(this);
    label67 = new QLabel(this);
    label68 = new QLabel(this);
    label69 = new QLabel(this);

    box71 = new myspinbox(this);
    box72 = new myspinbox(this);
    box73 = new myspinbox(this);
    box74 = new myspinbox(this);
    box75 = new myspinbox(this);
    box76 = new myspinbox(this);
    box77 = new myspinbox(this);
    box78 = new myspinbox(this);
    box79 = new myspinbox(this);
    label71 = new QLabel(this);
    label72 = new QLabel(this);
    label73 = new QLabel(this);
    label74 = new QLabel(this);
    label75 = new QLabel(this);
    label76 = new QLabel(this);
    label77 = new QLabel(this);
    label78 = new QLabel(this);
    label79 = new QLabel(this);

    box81 = new myspinbox(this);
    box82 = new myspinbox(this);
    box83 = new myspinbox(this);
    box84 = new myspinbox(this);
    box85 = new myspinbox(this);
    box86 = new myspinbox(this);
    box87 = new myspinbox(this);
    box88 = new myspinbox(this);
    box89 = new myspinbox(this);
    label81 = new QLabel(this);
    label82 = new QLabel(this);
    label83 = new QLabel(this);
    label84 = new QLabel(this);
    label85 = new QLabel(this);
    label86 = new QLabel(this);
    label87 = new QLabel(this);
    label88 = new QLabel(this);
    label89 = new QLabel(this);

    box91 = new myspinbox(this);
    box92 = new myspinbox(this);
    box93 = new myspinbox(this);
    box94 = new myspinbox(this);
    box95 = new myspinbox(this);
    box96 = new myspinbox(this);
    box97 = new myspinbox(this);
    box98 = new myspinbox(this);
    box99 = new myspinbox(this);
    label91 = new QLabel(this);
    label92 = new QLabel(this);
    label93 = new QLabel(this);
    label94 = new QLabel(this);
    label95 = new QLabel(this);
    label96 = new QLabel(this);
    label97 = new QLabel(this);
    label98 = new QLabel(this);
    label99 = new QLabel(this);

    int i = 40;
    int j = 400;
    box11->move(0, 0);
    box12->move(i, 0);
    box13->move(2*i, 0);
    box14->move(3*i, 0);
    box15->move(4*i, 0);
    box16->move(5*i, 0);
    box17->move(6*i, 0);
    box18->move(7*i, 0);
    box19->move(8*i, 0);

    label11->move(j, 0);
    label12->move(j + i, 0);
    label13->move(j + 2*i, 0);
    label14->move(j + 3*i, 0);
    label15->move(j + 4*i, 0);
    label16->move(j + 5*i, 0);
    label17->move(j + 6*i, 0);
    label18->move(j + 7*i, 0);
    label19->move(j + 8*i, 0);

    box21->move(0, i);
    box22->move(i, i);
    box23->move(2*i, i);
    box24->move(3*i, i);
    box25->move(4*i, i);
    box26->move(5*i, i);
    box27->move(6*i, i);
    box28->move(7*i, i);
    box29->move(8*i, i);

    label21->move(j, i);
    label22->move(j + i, i);
    label23->move(j + 2*i, i);
    label24->move(j + 3*i, i);
    label25->move(j + 4*i, i);
    label26->move(j + 5*i, i);
    label27->move(j + 6*i, i);
    label28->move(j + 7*i, i);
    label29->move(j + 8*i, i);

    int ii = 2*i;

    box31->move(0, ii);
    box32->move(i, ii);
    box33->move(2*i, ii);
    box34->move(3*i, ii);
    box35->move(4*i, ii);
    box36->move(5*i, ii);
    box37->move(6*i, ii);
    box38->move(7*i, ii);
    box39->move(8*i, ii);

    label31->move(j, ii);
    label32->move(j + i, ii);
    label33->move(j + 2*i, ii);
    label34->move(j + 3*i, ii);
    label35->move(j + 4*i, ii);
    label36->move(j + 5*i, ii);
    label37->move(j + 6*i, ii);
    label38->move(j + 7*i, ii);
    label39->move(j + 8*i, ii);

    ii = 3*i;

    box41->move(0, ii);
    box42->move(i, ii);
    box43->move(2*i, ii);
    box44->move(3*i, ii);
    box45->move(4*i, ii);
    box46->move(5*i, ii);
    box47->move(6*i, ii);
    box48->move(7*i, ii);
    box49->move(8*i, ii);

    label41->move(j, ii);
    label42->move(j + i, ii);
    label43->move(j + 2*i, ii);
    label44->move(j + 3*i, ii);
    label45->move(j + 4*i, ii);
    label46->move(j + 5*i, ii);
    label47->move(j + 6*i, ii);
    label48->move(j + 7*i, ii);
    label49->move(j + 8*i, ii);

    ii = 4*i;

    box51->move(0, ii);
    box52->move(i, ii);
    box53->move(2*i, ii);
    box54->move(3*i, ii);
    box55->move(4*i, ii);
    box56->move(5*i, ii);
    box57->move(6*i, ii);
    box58->move(7*i, ii);
    box59->move(8*i, ii);

    label51->move(j, ii);
    label52->move(j + i, ii);
    label53->move(j + 2*i, ii);
    label54->move(j + 3*i, ii);
    label55->move(j + 4*i, ii);
    label56->move(j + 5*i, ii);
    label57->move(j + 6*i, ii);
    label58->move(j + 7*i, ii);
    label59->move(j + 8*i, ii);

    ii = 5*i;
    box61->move(0, ii);
    box62->move(i, ii);
    box63->move(2*i, ii);
    box64->move(3*i, ii);
    box65->move(4*i, ii);
    box66->move(5*i, ii);
    box67->move(6*i, ii);
    box68->move(7*i, ii);
    box69->move(8*i, ii);

    label61->move(j, ii);
    label62->move(j + i, ii);
    label63->move(j + 2*i, ii);
    label64->move(j + 3*i, ii);
    label65->move(j + 4*i, ii);
    label66->move(j + 5*i, ii);
    label67->move(j + 6*i, ii);
    label68->move(j + 7*i, ii);
    label69->move(j + 8*i, ii);

    ii = 6*i;
    box71->move(0, ii);
    box72->move(i, ii);
    box73->move(2*i, ii);
    box74->move(3*i, ii);
    box75->move(4*i, ii);
    box76->move(5*i, ii);
    box77->move(6*i, ii);
    box78->move(7*i, ii);
    box79->move(8*i, ii);

    label71->move(j, ii);
    label72->move(j + i, ii);
    label73->move(j + 2*i, ii);
    label74->move(j + 3*i, ii);
    label75->move(j + 4*i, ii);
    label76->move(j + 5*i, ii);
    label77->move(j + 6*i, ii);
    label78->move(j + 7*i, ii);
    label79->move(j + 8*i, ii);

    ii = 7*i;
    box81->move(0, ii);
    box82->move(i, ii);
    box83->move(2*i, ii);
    box84->move(3*i, ii);
    box85->move(4*i, ii);
    box86->move(5*i, ii);
    box87->move(6*i, ii);
    box88->move(7*i, ii);
    box89->move(8*i, ii);

    label81->move(j, ii);
    label82->move(j + i, ii);
    label83->move(j + 2*i, ii);
    label84->move(j + 3*i, ii);
    label85->move(j + 4*i, ii);
    label86->move(j + 5*i, ii);
    label87->move(j + 6*i, ii);
    label88->move(j + 7*i, ii);
    label89->move(j + 8*i, ii);

    ii = 8*i;
    box91->move(0, ii);
    box92->move(i, ii);
    box93->move(2*i, ii);
    box94->move(3*i, ii);
    box95->move(4*i, ii);
    box96->move(5*i, ii);
    box97->move(6*i, ii);
    box98->move(7*i, ii);
    box99->move(8*i, ii);

    label91->move(j, ii);
    label92->move(j + i, ii);
    label93->move(j + 2*i, ii);
    label94->move(j + 3*i, ii);
    label95->move(j + 4*i, ii);
    label96->move(j + 5*i, ii);
    label97->move(j + 6*i, ii);
    label98->move(j + 7*i, ii);
    label99->move(j + 8*i, ii);

    QObject::connect(box11, SIGNAL(valueChanged(int)), label11, SLOT(setNum(int)));
    QObject::connect(box12, SIGNAL(valueChanged(int)), label12, SLOT(setNum(int)));
    QObject::connect(box13, SIGNAL(valueChanged(int)), label13, SLOT(setNum(int)));
    QObject::connect(box14, SIGNAL(valueChanged(int)), label14, SLOT(setNum(int)));
    QObject::connect(box15, SIGNAL(valueChanged(int)), label15, SLOT(setNum(int)));
    QObject::connect(box16, SIGNAL(valueChanged(int)), label16, SLOT(setNum(int)));
    QObject::connect(box17, SIGNAL(valueChanged(int)), label17, SLOT(setNum(int)));
    QObject::connect(box18, SIGNAL(valueChanged(int)), label18, SLOT(setNum(int)));
    QObject::connect(box19, SIGNAL(valueChanged(int)), label19, SLOT(setNum(int)));

    QObject::connect(box21, SIGNAL(valueChanged(int)), label21, SLOT(setNum(int)));
    QObject::connect(box22, SIGNAL(valueChanged(int)), label22, SLOT(setNum(int)));
    QObject::connect(box23, SIGNAL(valueChanged(int)), label23, SLOT(setNum(int)));
    QObject::connect(box24, SIGNAL(valueChanged(int)), label24, SLOT(setNum(int)));
    QObject::connect(box25, SIGNAL(valueChanged(int)), label25, SLOT(setNum(int)));
    QObject::connect(box26, SIGNAL(valueChanged(int)), label26, SLOT(setNum(int)));
    QObject::connect(box27, SIGNAL(valueChanged(int)), label27, SLOT(setNum(int)));
    QObject::connect(box28, SIGNAL(valueChanged(int)), label28, SLOT(setNum(int)));
    QObject::connect(box29, SIGNAL(valueChanged(int)), label29, SLOT(setNum(int)));

    QObject::connect(box31, SIGNAL(valueChanged(int)), label31, SLOT(setNum(int)));
    QObject::connect(box32, SIGNAL(valueChanged(int)), label32, SLOT(setNum(int)));
    QObject::connect(box33, SIGNAL(valueChanged(int)), label33, SLOT(setNum(int)));
    QObject::connect(box34, SIGNAL(valueChanged(int)), label34, SLOT(setNum(int)));
    QObject::connect(box35, SIGNAL(valueChanged(int)), label35, SLOT(setNum(int)));
    QObject::connect(box36, SIGNAL(valueChanged(int)), label36, SLOT(setNum(int)));
    QObject::connect(box37, SIGNAL(valueChanged(int)), label37, SLOT(setNum(int)));
    QObject::connect(box38, SIGNAL(valueChanged(int)), label38, SLOT(setNum(int)));
    QObject::connect(box39, SIGNAL(valueChanged(int)), label39, SLOT(setNum(int)));

    QObject::connect(box41, SIGNAL(valueChanged(int)), label41, SLOT(setNum(int)));
    QObject::connect(box42, SIGNAL(valueChanged(int)), label42, SLOT(setNum(int)));
    QObject::connect(box43, SIGNAL(valueChanged(int)), label43, SLOT(setNum(int)));
    QObject::connect(box44, SIGNAL(valueChanged(int)), label44, SLOT(setNum(int)));
    QObject::connect(box45, SIGNAL(valueChanged(int)), label45, SLOT(setNum(int)));
    QObject::connect(box46, SIGNAL(valueChanged(int)), label46, SLOT(setNum(int)));
    QObject::connect(box47, SIGNAL(valueChanged(int)), label47, SLOT(setNum(int)));
    QObject::connect(box48, SIGNAL(valueChanged(int)), label48, SLOT(setNum(int)));
    QObject::connect(box49, SIGNAL(valueChanged(int)), label49, SLOT(setNum(int)));

    QObject::connect(box51, SIGNAL(valueChanged(int)), label51, SLOT(setNum(int)));
    QObject::connect(box52, SIGNAL(valueChanged(int)), label52, SLOT(setNum(int)));
    QObject::connect(box53, SIGNAL(valueChanged(int)), label53, SLOT(setNum(int)));
    QObject::connect(box54, SIGNAL(valueChanged(int)), label54, SLOT(setNum(int)));
    QObject::connect(box55, SIGNAL(valueChanged(int)), label55, SLOT(setNum(int)));
    QObject::connect(box56, SIGNAL(valueChanged(int)), label56, SLOT(setNum(int)));
    QObject::connect(box57, SIGNAL(valueChanged(int)), label57, SLOT(setNum(int)));
    QObject::connect(box58, SIGNAL(valueChanged(int)), label58, SLOT(setNum(int)));
    QObject::connect(box59, SIGNAL(valueChanged(int)), label59, SLOT(setNum(int)));

    QObject::connect(box61, SIGNAL(valueChanged(int)), label61, SLOT(setNum(int)));
    QObject::connect(box62, SIGNAL(valueChanged(int)), label62, SLOT(setNum(int)));
    QObject::connect(box63, SIGNAL(valueChanged(int)), label63, SLOT(setNum(int)));
    QObject::connect(box64, SIGNAL(valueChanged(int)), label64, SLOT(setNum(int)));
    QObject::connect(box65, SIGNAL(valueChanged(int)), label65, SLOT(setNum(int)));
    QObject::connect(box66, SIGNAL(valueChanged(int)), label66, SLOT(setNum(int)));
    QObject::connect(box67, SIGNAL(valueChanged(int)), label67, SLOT(setNum(int)));
    QObject::connect(box68, SIGNAL(valueChanged(int)), label68, SLOT(setNum(int)));
    QObject::connect(box69, SIGNAL(valueChanged(int)), label69, SLOT(setNum(int)));

    QObject::connect(box71, SIGNAL(valueChanged(int)), label71, SLOT(setNum(int)));
    QObject::connect(box72, SIGNAL(valueChanged(int)), label72, SLOT(setNum(int)));
    QObject::connect(box73, SIGNAL(valueChanged(int)), label73, SLOT(setNum(int)));
    QObject::connect(box74, SIGNAL(valueChanged(int)), label74, SLOT(setNum(int)));
    QObject::connect(box75, SIGNAL(valueChanged(int)), label75, SLOT(setNum(int)));
    QObject::connect(box76, SIGNAL(valueChanged(int)), label76, SLOT(setNum(int)));
    QObject::connect(box77, SIGNAL(valueChanged(int)), label77, SLOT(setNum(int)));
    QObject::connect(box78, SIGNAL(valueChanged(int)), label78, SLOT(setNum(int)));
    QObject::connect(box79, SIGNAL(valueChanged(int)), label79, SLOT(setNum(int)));


    QObject::connect(box81, SIGNAL(valueChanged(int)), label81, SLOT(setNum(int)));
    QObject::connect(box82, SIGNAL(valueChanged(int)), label82, SLOT(setNum(int)));
    QObject::connect(box83, SIGNAL(valueChanged(int)), label83, SLOT(setNum(int)));
    QObject::connect(box84, SIGNAL(valueChanged(int)), label84, SLOT(setNum(int)));
    QObject::connect(box85, SIGNAL(valueChanged(int)), label85, SLOT(setNum(int)));
    QObject::connect(box86, SIGNAL(valueChanged(int)), label86, SLOT(setNum(int)));
    QObject::connect(box87, SIGNAL(valueChanged(int)), label87, SLOT(setNum(int)));
    QObject::connect(box88, SIGNAL(valueChanged(int)), label88, SLOT(setNum(int)));
    QObject::connect(box89, SIGNAL(valueChanged(int)), label89, SLOT(setNum(int)));

    QObject::connect(box91, SIGNAL(valueChanged(int)), label91, SLOT(setNum(int)));
    QObject::connect(box92, SIGNAL(valueChanged(int)), label92, SLOT(setNum(int)));
    QObject::connect(box93, SIGNAL(valueChanged(int)), label93, SLOT(setNum(int)));
    QObject::connect(box94, SIGNAL(valueChanged(int)), label94, SLOT(setNum(int)));
    QObject::connect(box95, SIGNAL(valueChanged(int)), label95, SLOT(setNum(int)));
    QObject::connect(box96, SIGNAL(valueChanged(int)), label96, SLOT(setNum(int)));
    QObject::connect(box97, SIGNAL(valueChanged(int)), label97, SLOT(setNum(int)));
    QObject::connect(box98, SIGNAL(valueChanged(int)), label98, SLOT(setNum(int)));
    QObject::connect(box99, SIGNAL(valueChanged(int)), label99, SLOT(setNum(int)));



}


fenetre::~fenetre(){
    delete bouton_quitter;
    delete bouton_solve;

    delete grid;

    delete(box11);
    delete(box12);
    delete(box13);
    delete(box14);
    delete(box15);
    delete(box16);
    delete(box17);
    delete(box18);
    delete(box19);
    delete(box21);
    delete(box22);
    delete(box23);
    delete(box24);
    delete(box25);
    delete(box26);
    delete(box27);
    delete(box28);
    delete(box29);
    delete(box31);
    delete(box32);
    delete(box33);
    delete(box34);
    delete(box35);
    delete(box36);
    delete(box37);
    delete(box38);
    delete(box39);
    delete(box41);
    delete(box42);
    delete(box43);
    delete(box44);
    delete(box45);
    delete(box46);
    delete(box47);
    delete(box48);
    delete(box49);
    delete(box51);
    delete(box52);
    delete(box53);
    delete(box54);
    delete(box55);
    delete(box56);
    delete(box57);
    delete(box58);
    delete(box59);
    delete(box61);
    delete(box62);
    delete(box63);
    delete(box64);
    delete(box65);
    delete(box66);
    delete(box67);
    delete(box68);
    delete(box69);
    delete(box71);
    delete(box72);
    delete(box73);
    delete(box74);
    delete(box75);
    delete(box76);
    delete(box77);
    delete(box78);
    delete(box79);
    delete(box81);
    delete(box82);
    delete(box83);
    delete(box84);
    delete(box85);
    delete(box86);
    delete(box87);
    delete(box88);
    delete(box89);
    delete(box91);
    delete(box92);
    delete(box93);
    delete(box94);
    delete(box95);
    delete(box96);
    delete(box97);
    delete(box98);
    delete(box99);
}



