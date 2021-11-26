#include "fenetre.h"

void fenetre::solve(){
    //label11->setStyleSheet("QLabel { background-color : yellow }");
    //disconnect
    QSignalBlocker* blocker = new QSignalBlocker(this);

    //lecture label -> grille
    readvalue();
    for (int i=0; i < 81; i++){
        if (((grid->liste)[i])->valeur != 0) ((grid->liste)[i])->is_valid = FIX;
    }

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
                } else {
                    c++;
                    std::cout << "c" << c << std::endl;
                    current = pile[pile.size() - c - 1];
                    std::cout << "redef current : " << current << std::endl ;
                }
                ok = grid->test(current);

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
    label12->setNum(5);
    label82->setNum(4);
    label13->setNum(7);
    label42->setNum(1);
    label14->setNum(2);
    label17->setNum(3);
    label93->setNum(4);
    label99->setNum(7);
    delete blocker;
}


void fenetre::readvalue(){
    ((grid->liste)[0])->valeur = (label11->text()).toInt();
    ((grid->liste)[1])->valeur = (label12->text()).toInt();
    ((grid->liste)[2])->valeur = (label13->text()).toInt();
    ((grid->liste)[3])->valeur = (label14->text()).toInt();
    ((grid->liste)[4])->valeur = (label15->text()).toInt();
    ((grid->liste)[5])->valeur = (label16->text()).toInt();
    ((grid->liste)[6])->valeur = (label17->text()).toInt();
    ((grid->liste)[7])->valeur = (label18->text()).toInt();
    ((grid->liste)[8])->valeur = (label19->text()).toInt();
    ((grid->liste)[9])->valeur = (label21->text()).toInt();
    ((grid->liste)[10])->valeur = (label22->text()).toInt();
    ((grid->liste)[11])->valeur = (label23->text()).toInt();
    ((grid->liste)[12])->valeur = (label24->text()).toInt();
    ((grid->liste)[13])->valeur = (label25->text()).toInt();
    ((grid->liste)[14])->valeur = (label26->text()).toInt();
    ((grid->liste)[15])->valeur = (label27->text()).toInt();
    ((grid->liste)[16])->valeur = (label28->text()).toInt();
    ((grid->liste)[17])->valeur = (label29->text()).toInt();
    ((grid->liste)[18])->valeur = (label31->text()).toInt();
    ((grid->liste)[19])->valeur = (label32->text()).toInt();
    ((grid->liste)[20])->valeur = (label33->text()).toInt();
    ((grid->liste)[21])->valeur = (label34->text()).toInt();
    ((grid->liste)[22])->valeur = (label35->text()).toInt();
    ((grid->liste)[23])->valeur = (label36->text()).toInt();
    ((grid->liste)[24])->valeur = (label37->text()).toInt();
    ((grid->liste)[25])->valeur = (label38->text()).toInt();
    ((grid->liste)[26])->valeur = (label39->text()).toInt();
    ((grid->liste)[27])->valeur = (label41->text()).toInt();
    ((grid->liste)[28])->valeur = (label42->text()).toInt();
    ((grid->liste)[29])->valeur = (label43->text()).toInt();
    ((grid->liste)[30])->valeur = (label44->text()).toInt();
    ((grid->liste)[31])->valeur = (label45->text()).toInt();
    ((grid->liste)[32])->valeur = (label46->text()).toInt();
    ((grid->liste)[33])->valeur = (label47->text()).toInt();
    ((grid->liste)[34])->valeur = (label48->text()).toInt();
    ((grid->liste)[35])->valeur = (label49->text()).toInt();
    ((grid->liste)[36])->valeur = (label51->text()).toInt();
    ((grid->liste)[37])->valeur = (label52->text()).toInt();
    ((grid->liste)[38])->valeur = (label53->text()).toInt();
    ((grid->liste)[39])->valeur = (label54->text()).toInt();
    ((grid->liste)[40])->valeur = (label55->text()).toInt();
    ((grid->liste)[41])->valeur = (label56->text()).toInt();
    ((grid->liste)[42])->valeur = (label57->text()).toInt();
    ((grid->liste)[43])->valeur = (label58->text()).toInt();
    ((grid->liste)[44])->valeur = (label59->text()).toInt();
    ((grid->liste)[45])->valeur = (label61->text()).toInt();
    ((grid->liste)[46])->valeur = (label62->text()).toInt();
    ((grid->liste)[47])->valeur = (label63->text()).toInt();
    ((grid->liste)[48])->valeur = (label64->text()).toInt();
    ((grid->liste)[49])->valeur = (label65->text()).toInt();
    ((grid->liste)[50])->valeur = (label66->text()).toInt();
    ((grid->liste)[51])->valeur = (label67->text()).toInt();
    ((grid->liste)[52])->valeur = (label68->text()).toInt();
    ((grid->liste)[53])->valeur = (label69->text()).toInt();
    ((grid->liste)[54])->valeur = (label71->text()).toInt();
    ((grid->liste)[55])->valeur = (label72->text()).toInt();
    ((grid->liste)[56])->valeur = (label73->text()).toInt();
    ((grid->liste)[57])->valeur = (label74->text()).toInt();
    ((grid->liste)[58])->valeur = (label75->text()).toInt();
    ((grid->liste)[59])->valeur = (label76->text()).toInt();
    ((grid->liste)[60])->valeur = (label77->text()).toInt();
    ((grid->liste)[61])->valeur = (label78->text()).toInt();
    ((grid->liste)[62])->valeur = (label79->text()).toInt();
    ((grid->liste)[63])->valeur = (label81->text()).toInt();
    ((grid->liste)[64])->valeur = (label82->text()).toInt();
    ((grid->liste)[65])->valeur = (label83->text()).toInt();
    ((grid->liste)[66])->valeur = (label84->text()).toInt();
    ((grid->liste)[67])->valeur = (label85->text()).toInt();
    ((grid->liste)[68])->valeur = (label86->text()).toInt();
    ((grid->liste)[69])->valeur = (label87->text()).toInt();
    ((grid->liste)[70])->valeur = (label88->text()).toInt();
    ((grid->liste)[71])->valeur = (label89->text()).toInt();
    ((grid->liste)[72])->valeur = (label91->text()).toInt();
    ((grid->liste)[73])->valeur = (label92->text()).toInt();
    ((grid->liste)[74])->valeur = (label93->text()).toInt();
    ((grid->liste)[75])->valeur = (label94->text()).toInt();
    ((grid->liste)[76])->valeur = (label95->text()).toInt();
    ((grid->liste)[77])->valeur = (label96->text()).toInt();
    ((grid->liste)[78])->valeur = (label97->text()).toInt();
    ((grid->liste)[79])->valeur = (label98->text()).toInt();
    ((grid->liste)[80])->valeur = (label99->text()).toInt();
}

void fenetre::writevalue(){
    label11->setNum(((grid->liste)[0])->valeur);
    label12->setNum(((grid->liste)[1])->valeur);
    label13->setNum(((grid->liste)[2])->valeur);
    label14->setNum(((grid->liste)[3])->valeur);
    label15->setNum(((grid->liste)[4])->valeur);
    label16->setNum(((grid->liste)[5])->valeur);
    label17->setNum(((grid->liste)[6])->valeur);
    label18->setNum(((grid->liste)[7])->valeur);
    label19->setNum(((grid->liste)[8])->valeur);
    label21->setNum(((grid->liste)[9])->valeur);
    label22->setNum(((grid->liste)[10])->valeur);
    label23->setNum(((grid->liste)[11])->valeur);
    label24->setNum(((grid->liste)[12])->valeur);
    label25->setNum(((grid->liste)[13])->valeur);
    label26->setNum(((grid->liste)[14])->valeur);
    label27->setNum(((grid->liste)[15])->valeur);
    label28->setNum(((grid->liste)[16])->valeur);
    label29->setNum(((grid->liste)[17])->valeur);
    label31->setNum(((grid->liste)[18])->valeur);
    label32->setNum(((grid->liste)[19])->valeur);
    label33->setNum(((grid->liste)[20])->valeur);
    label34->setNum(((grid->liste)[21])->valeur);
    label35->setNum(((grid->liste)[22])->valeur);
    label36->setNum(((grid->liste)[23])->valeur);
    label37->setNum(((grid->liste)[24])->valeur);
    label38->setNum(((grid->liste)[25])->valeur);
    label39->setNum(((grid->liste)[26])->valeur);
    label41->setNum(((grid->liste)[27])->valeur);
    label42->setNum(((grid->liste)[28])->valeur);
    label43->setNum(((grid->liste)[29])->valeur);
    label44->setNum(((grid->liste)[30])->valeur);
    label45->setNum(((grid->liste)[31])->valeur);
    label46->setNum(((grid->liste)[32])->valeur);
    label47->setNum(((grid->liste)[33])->valeur);
    label48->setNum(((grid->liste)[34])->valeur);
    label49->setNum(((grid->liste)[35])->valeur);
    label51->setNum(((grid->liste)[36])->valeur);
    label52->setNum(((grid->liste)[37])->valeur);
    label53->setNum(((grid->liste)[38])->valeur);
    label54->setNum(((grid->liste)[39])->valeur);
    label55->setNum(((grid->liste)[40])->valeur);
    label56->setNum(((grid->liste)[41])->valeur);
    label57->setNum(((grid->liste)[42])->valeur);
    label58->setNum(((grid->liste)[43])->valeur);
    label59->setNum(((grid->liste)[44])->valeur);
    label61->setNum(((grid->liste)[45])->valeur);
    label62->setNum(((grid->liste)[46])->valeur);
    label63->setNum(((grid->liste)[47])->valeur);
    label64->setNum(((grid->liste)[48])->valeur);
    label65->setNum(((grid->liste)[49])->valeur);
    label66->setNum(((grid->liste)[50])->valeur);
    label67->setNum(((grid->liste)[51])->valeur);
    label68->setNum(((grid->liste)[52])->valeur);
    label69->setNum(((grid->liste)[53])->valeur);
    label71->setNum(((grid->liste)[54])->valeur);
    label72->setNum(((grid->liste)[55])->valeur);
    label73->setNum(((grid->liste)[56])->valeur);
    label74->setNum(((grid->liste)[57])->valeur);
    label75->setNum(((grid->liste)[58])->valeur);
    label76->setNum(((grid->liste)[59])->valeur);
    label77->setNum(((grid->liste)[60])->valeur);
    label78->setNum(((grid->liste)[61])->valeur);
    label79->setNum(((grid->liste)[62])->valeur);
    label81->setNum(((grid->liste)[63])->valeur);
    label82->setNum(((grid->liste)[64])->valeur);
    label83->setNum(((grid->liste)[65])->valeur);
    label84->setNum(((grid->liste)[66])->valeur);
    label85->setNum(((grid->liste)[67])->valeur);
    label86->setNum(((grid->liste)[68])->valeur);
    label87->setNum(((grid->liste)[69])->valeur);
    label88->setNum(((grid->liste)[70])->valeur);
    label89->setNum(((grid->liste)[71])->valeur);
    label91->setNum(((grid->liste)[72])->valeur);
    label92->setNum(((grid->liste)[73])->valeur);
    label93->setNum(((grid->liste)[74])->valeur);
    label94->setNum(((grid->liste)[75])->valeur);
    label95->setNum(((grid->liste)[76])->valeur);
    label96->setNum(((grid->liste)[77])->valeur);
    label97->setNum(((grid->liste)[78])->valeur);
    label98->setNum(((grid->liste)[79])->valeur);
    label99->setNum(((grid->liste)[80])->valeur);
}
