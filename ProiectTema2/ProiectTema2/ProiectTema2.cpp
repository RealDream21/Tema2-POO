//#include "abonament.h"
#include "persoana.h"

int main()
{
    /*----------------------TO DO ----------------------/
    //de implementat static in Persoana, Abonat, abonament si abonament_premium sa tina minte nr de abonamente
    //dupa aceea se afiseaza numarul de abonamente tot cu o functie static
    //cout la persoana(should be easy)
    //clasa de Clienti in care tin minte mai multi abonati(nu mostenire, ci compunere)
    //meniu interactiv: citessc tipul de abonament 1 -> premium, 2-> normal sau ceva de genul

    //functionalitatile: afisare abonati separati de abonati_premium
    //castigul total pentru toti abonatii, chestii de genul
    /*----------------------TO DO ----------------------*/



    Abonament_premium* prem = new Abonament_premium();
    Abonament* norm = new Abonament();

    std::shared_ptr<Abonament> p(new Abonament_premium());
    p->setInfo();
    std::cout << p;
    Abonat A("381381", "salutare", "1234", 12, p);
    (*p).showInfo();

    //Abonat B("nrtelsxdd", "salutnume", "cnpxdd", 12, p);
    //B.showInfo();


    std::cout << "Hello World!\n";
    return 0;
}
