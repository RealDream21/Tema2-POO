//#include "abonament.h"
#include "persoana.h"
#include "clienti.h"


int main()
{
    /*----------------------TO DO ----------------------/
    //de implementat static in Persoana, Abonat, abonament si abonament_premium sa tina minte nr de abonamente <--- DONE
    //dupa aceea se afiseaza numarul de abonamente tot cu o functie static <--- DONE
    //cout la persoana(should be easy) <--- DONE
    //cin la persoana si abonat <--- DONE

    //clasa de Clienti in care tin minte mai multi abonati(nu mostenire, ci compunere)  <--- KINDA DONE
    //meniu interactiv: citessc tipul de abonament 1 -> premium, 2-> normal sau ceva de genul <--- DONE
    //clasa pur virtuala!!! se poate face un gimmick <--- IMPORTANT
    //exceptii  de genul tip diferit: ceva ce nu se potriveste <--- IMPORTANT
    //ex exceptie: std::out_of_range <--- IMPORTANT
    //try si catch in main <--- IMPORTANT
    //try si catch in alte cpp -> exemplu <--- IMPORTANT

    //clasa de Clienti in care tin minte mai multi abonati(nu mostenire, ci compunere)
    //meniu interactiv: citessc tipul de abonament 1 -> premium, 2-> normal sau ceva de genul
    //meniu interactiv: 1 pt a citi alt abonament, 2 pt adauga persoana, etc.


    //functionalitatile: afisare abonati separati de abonati_premium
    //castigul total pentru toti abonatii, chestii de genul
    /*----------------------TO DO ----------------------*/
    
    /*-------------------TO ASK ----------------------*/
    //copierea la smart pointers din operator= la Abonat ???
    /*-------------------TO ASK ----------------------*/

    /*-------------------PROBLEME CUNOSCUTE -------------------*/
    //citirea fara spatii a numelui de abonament <--- EXCEPTION 
    //eroare la D[3] cand 3 e out of range. poate cu exception? <--- EXCEPTION 
    //check la operator[] daca e ok compararea cu size <--- EXCEPTION
    //eventual trebuie comparat cu size si la pop_back 
    //aici se pot introduce exceptiile
    //copierea de genul pointer1 = pointer2 desi merge bine, probabil cel mai ok este copierea normala ca la tema trecuta(copierea fiecarui atribut)

    /*-------------------PROBLEME CUNOSCUTE -------------------*/

    Clienti C;
    std::unique_ptr<Abonament> p = std::move(std::make_unique<Abonament_premium>(12, "321", 12.5, 12));
    Abonat a("nrtel", "nume", "3981893cnp", 12, p);
    a.showInfo();



 
    std::cout << "Hello World!\n";
    return 0;
}
