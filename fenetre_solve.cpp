#include "fenetre.h"
#ifndef DEBUG
#define DEBUG 0
#endif

void fenetre::solve(){
    //disconnect
    QSignalBlocker* blocker = new QSignalBlocker(this);

    //solving
    int current = 0;
    int nb_current = 0; //place de current dans la PILE ie liste sans les is_valid=FIX
    int ok = 0;
    std::vector<int> pile; //PILE des elmts non FIX

    while( current < 81){
#if DEBUG

        std::cout << KRED << "DEBUT" << current << KNRM << std::endl ;
        std::cout << "is_valid : " << ((grid->liste)[current])->is_valid << std::endl;
#endif
        if (((grid->liste)[current])->is_valid != FIX){

            nb_current ++;
            if(pile.size() < nb_current) pile.push_back(current); //ie elmt jamais rencontre => on le met ds la pile

            if (((grid->liste)[current])->valeur == 0) ok = 0;
            else ok = grid->test(current);

            while(!ok){
/*#if DEBUG
               if (current > 30){
                std::cout << "current" << current << std::endl;
                std::cout << "valeur" << ((grid->liste)[current])->valeur << std::endl;
               }
#endif*/
                if (((grid->liste)[current])->valeur < 9){

                    ((grid->liste)[current])->valeur ++;
#if DEBUG
                    std::cout << "redef valeur : " << ((grid->liste)[current])->valeur << std::endl;
#endif
                    ok = grid->test(current);

                } else {

                    ((grid->liste)[current])->valeur = 0;
                    current = pile[nb_current - 1];
                    nb_current --;
#if DEBUG
                    std::cout << "redef current : " << current << std::endl ;
#endif
                }


            }
        }
        current ++;
    }
#if DEBUG
    std::cout << "sortie du solving" << std::endl;
#endif

    //ecriture grille -> label
    writevalue();
    //reconnect
    delete blocker;
}

void fenetre::init(){
    QSignalBlocker* blocker = new QSignalBlocker(this);
    grid->case12->changevalue(5, FIX);
    grid->case13->changevalue(3, FIX);
    grid->case15->changevalue(2, FIX);
    grid->case17->changevalue(9, FIX);
    grid->case19->changevalue(6, FIX);
    grid->case21->changevalue(8, FIX);
    grid->case33->changevalue(9, FIX);
    grid->case34->changevalue(4, FIX);
    grid->case36->changevalue(5, FIX);
    grid->case38->changevalue(1, FIX);
    grid->case43->changevalue(4, FIX);
    grid->case44->changevalue(7, FIX);
    grid->case48->changevalue(3, FIX);
    grid->case49->changevalue(9, FIX);
    grid->case61->changevalue(1, FIX);
    grid->case62->changevalue(3, FIX);
    grid->case66->changevalue(2, FIX);
    grid->case67->changevalue(6, FIX);
    grid->case72->changevalue(6, FIX);
    grid->case74->changevalue(5, FIX);
    grid->case76->changevalue(8, FIX);
    grid->case77->changevalue(2, FIX);
    grid->case89->changevalue(3, FIX);
    grid->case91->changevalue(3, FIX);
    grid->case93->changevalue(8, FIX);
    grid->case95->changevalue(9, FIX);
    grid->case97->changevalue(1, FIX);
    grid->case98->changevalue(5, FIX);
    delete blocker;
}

void fenetre::test(){
    QSignalBlocker* blocker = new QSignalBlocker(this);
    for (int i=0; i<81; i++){
        mycase* elmt = grid->liste[i];
        if (elmt->is_valid != FIX){
            if (grid->test(i)) elmt->changevalue(elmt->valeur,OK);
            else elmt->changevalue(elmt->valeur,FALSE);
        }
    }
    delete blocker;
}

void fenetre::writevalue(){
    for (int i=0; i<81; i++){
        grid->liste[i]->refreshlabel();    }
}
