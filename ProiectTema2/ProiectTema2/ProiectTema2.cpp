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
<<<<<<< Updated upstream
    //clasa de Clienti in care tin minte mai multi abonati(nu mostenire, ci compunere)  <--- KINDA DONE
    //meniu interactiv: citessc tipul de abonament 1 -> premium, 2-> normal sau ceva de genul <--- DONE
    //clasa pur virtuala!!! se poate face un gimmick <--- IMPORTANT
    //exceptii  de genul tip diferit: ceva ce nu se potriveste <--- IMPORTANT
    //ex exceptie: std::out_of_range <--- IMPORTANT
    //try si catch in main <--- IMPORTANT
    //try si catch in alte cpp -> exemplu <--- IMPORTANT
=======
    //clasa de Clienti in care tin minte mai multi abonati(nu mostenire, ci compunere)
    //meniu interactiv: citessc tipul de abonament 1 -> premium, 2-> normal sau ceva de genul
    //meniu interactiv: 1 pt a citi alt abonament, 2 pt adauga persoana, etc.
>>>>>>> Stashed changes

    //functionalitatile: afisare abonati separati de abonati_premium
    //castigul total pentru toti abonatii, chestii de genul
    /*----------------------TO DO ----------------------*/
    
    /*-------------------TO ASK ----------------------*/
    //copierea la smart pointers din operator= la Abonat ???
    /*-------------------TO ASK ----------------------*/

    /*-------------------PROBLEME CUNOSCUTE -------------------*/
<<<<<<< Updated upstream
    //citirea fara spatii a numelui de abonament <--- EXCEPTION 
    //eroare la D[3] cand 3 e out of range. poate cu exception? <--- EXCEPTION 
    //check la operator[] daca e ok compararea cu size <--- EXCEPTION
    //eventual trebuie comparat cu size si la pop_back 
    //aici se pot introduce exceptiile
=======
    //copierea de genul pointer1 = pointer2 desi merge bine, probabil cel mai ok este copierea normala ca la tema trecuta(copierea fiecarui atribut)
    //citirea fara spatii a numelui de abonament
    //eroare la D[3] cand 3 e out of range. poate cu exception?
    //check la operator[] daca e ok compararea cu size
    //eventual trebuie comparat cu size si la pop_back
>>>>>>> Stashed changes
    /*-------------------PROBLEME CUNOSCUTE -------------------*/


    std::shared_ptr<Abonat> p(new Abonat());
    Clienti D;
    p->setInfo();
    D.appendClient(p);
    D.removeLastClient()->showInfo();




    /*
    Persoana P;
    std::cin >> P;
    std::cout << P;
    std::shared_ptr<Abonament> p(new Abonament_premium());
    p->setInfo();
    Abonat D("31831", P, p);
    Persoana* ptr = &D;
    ptr->showInfo();

    Persoana A("marcel", "123871", 12);
    Abonament_premium C(14, "numeabonament", 12.50, 14);
    std::shared_ptr<Abonament> t(new Abonament_premium());
    t->setInfo();

    std::cout << B;
    Persoana D("marcel", "s318381", 14);
    std::cout << D;
    Abonament_premium* prem = new Abonament_premium();
    Abonament* norm = new Abonament();

    std::shared_ptr<Abonament> p(new Abonament());
    p->setInfo();
    std::cout << p;
    Abonat A("381381", "salutare", "1234", 12, p);
    p->showInfo();
    */

    //Abonat B("nrtelsxdd", "salutnume", "cnpxdd", 12, p);
    //B.showInfo();

    std::cout << "Hello World!\n";
    return 0;
}
