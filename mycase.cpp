#include "mycase.h"

mycase::mycase(mylabel* label_, myspinbox* spinbox_) : QWidget()
{
    valeur = 0;
    is_valid = 0;
    label = label_;
    spinbox = spinbox_;
    QObject::connect(spinbox, SIGNAL(valueChanged(int)), this, SLOT(changevalue(int)));
}

void mycase::changevalue(int nb){
    valeur = nb;
    refreshlabel();
}

void mycase::changevalue(int nb, int valid){
    valeur = nb;
    is_valid = valid;
    refreshlabel();
}

void mycase::refreshlabel(){
    label->setNum(valeur);
    switch(is_valid){
    case FALSE :
        label->setStyleSheet("QLabel { background-color : red }");
        break;
    case OK :
        label->setStyleSheet("QLabel { background-color : green }");
        break;
    case FIX :
        label->setStyleSheet("QLabel { background-color : gray }");
        break;
    default :
        ;
    }

}

mycase::~mycase(){

}
