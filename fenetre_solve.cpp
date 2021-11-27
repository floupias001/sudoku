#include "fenetre.h"

void fenetre::solve(){
    //label11->setStyleSheet("QLabel { background-color : yellow }");
    //disconnect
    QSignalBlocker* blocker = new QSignalBlocker(this);

    //solving
    int current = 0;
    int ok = 0;
    int previous = 0;
    std::vector<int> pile;
    while( current < 81){
        std::cout << "DEBUT" << current << std::endl ;
        std::cout << "is_valid de current" << ((grid->liste)[current])->is_valid << std::endl;
        if (((grid->liste)[current])->is_valid != FIX){
            pile.push_back(current);
            if (((grid->liste)[current])->valeur == 0) ok = 0;
            else ok = grid->test(current);
            int c = 0;
            previous = current;
            while(!ok){
                std::cout << "current" << current << std::endl;
                std::cout << "valeur" << ((grid->liste)[current])->valeur << std::endl;
                if (((grid->liste)[current])->valeur < 9){
                    ((grid->liste)[current])->valeur ++;
                    std::cout << "redef valeur : " << ((grid->liste)[current])->valeur << std::endl;
                    ok = grid->test(current);
                } else {
                    c++;
                    std::cout << "c" << c << std::endl;
                    ((grid->liste)[current])->valeur = 0;
                    //previous = current - 1;
                    current = pile[pile.size() - c - 1];
                    std::cout << "redef current : " << current << std::endl ;
                }


            }
            current = previous;
        }
        current ++;
    }
    std::cout << "sortie du solving" << std::endl;

    //ecriture grille -> label
    writevalue();
    //reconnect
    delete blocker;
}

void fenetre::init(){
    QSignalBlocker* blocker = new QSignalBlocker(this);
    grid->case11->changevalue(1);
    (grid->case11)->is_valid = FIX;
    grid->case19->changevalue(4);
    (grid->case19)->is_valid = FIX;
    grid->case85->changevalue(7);
    (grid->case85)->is_valid = FIX;
    grid->case24->changevalue(1);
    (grid->case24)->is_valid = FIX;
    grid->case46->changevalue(2);
    (grid->case46)->is_valid = FIX;
    grid->case76->changevalue(3);
    (grid->case76)->is_valid = FIX;
    grid->case82->changevalue(4);
    (grid->case82)->is_valid = FIX;
    grid->case93->changevalue(7);
    (grid->case93)->is_valid = FIX;
    delete blocker;
}

void fenetre::writevalue(){
    for (int i=0; i<81; i++){
        grid->liste[i]->refreshlabel();    }
}
