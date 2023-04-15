//#include "abonament.h"
//#include "persoana.h"
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
    //clasa de Clienti in care tin minte mai multi abonati(nu mostenire, ci compunere) <--- DONE
    //meniu interactiv: citessc tipul de abonament 1 -> premium, 2-> normal sau ceva de genul <--- DONE
    //clasa pur virtuala!!! se poate face un gimmick <--- IMPORTANT
    //exceptii  de genul tip diferit: ceva ce nu se potriveste <--- IMPORTANT
    //ex exceptie: std::out_of_range <--- IMPORTANT
    //try si catch in main <--- IMPORTANT
    //try si catch in alte cpp -> exemplu <--- IMPORTANT

    //meniu interactiv: 1 pt a citi alt abonament, 2 pt adauga persoana, etc.


    //functionalitatile: afisare abonati separati de abonati_premium
    //castigul total pentru toti abonatii, chestii de genul
    /*----------------------TO DO ----------------------*/
   

    /*-------------------PROBLEME CUNOSCUTE -------------------*/
    //CAND SE COPIAZA CLIENT1 = CLIENT2 si client2 are premium, iar client1 nu are => nu se copiaza si reducerea de la abonamentul premium
    //NU POT SA IAU FUCKING REDCUEREA DE LA ABONAMENTUL UNUI CLIENT
    
    
    //eroare la D[3] cand 3 e out of range. poate cu exception? <--- EXCEPTION 
    //check la operator[] daca e ok compararea cu size <--- EXCEPTION
    //eventual trebuie comparat cu size si la pop_back 
    //aici se pot introduce ex`ceptiile
    //copierea de genul pointer1 = pointer2 desi merge bine, probabil cel mai ok este copierea normala ca la tema trecuta(copierea fiecarui atribut)
    /*-------------------PROBLEME CUNOSCUTE -------------------*/

    Clienti listaClienti;

    std::string menuItem = "";

    while (true) {
        system("cls");
        std::cout << "Ce vrei sa faci?: \n";
        std::cout << " 1-> Adauga o persoana noua\n 2-> Afiseaza toti abonatii\n 3-> Afiseaza abonatii normali\n 4-> Afiseaza abonatii premium\n 5-> Afiseaza profitul total\n 6-> Iesi\n";
        std::cout << "Input: ";
        std::cin >> menuItem;

        if (menuItem == "1") {
            try {
                Abonat abonat;
                std::cin >> abonat;
                std::unique_ptr<Abonat> abonatToAdd = std::make_unique<Abonat>(abonat);
                //abonatToAdd->setInfo();
                //daca e abonat premium mai trebuie adaugat un nr de telefon. Merge cu downcasting verificata chestia asta
                listaClienti.appendClient(abonatToAdd);
                std::cout << "Am citit abonamentul cu succes. Apasa ENTER pentru a continua\n";
            }
            catch (std::exception& err) {
                std::cout <<"A APARUT O EROARE: " << err.what();
                std::cout << "Citirea abonamentului a esuat. Apasa ENTER pentru a continua\n";
            }
            std::cin.get();
            std::cin.get();
        }
        else if (menuItem == "2") {
            system("cls");
            listaClienti.print();
            std::cout << "ENTER pentru a continua\n";
            std::cin.get();
            std::cin.get();
        }
        else if (menuItem == "3") {
            *listaClienti[0] = *listaClienti[1];
            std::cin.get();
            std::cin.get();
        }
        else if (menuItem == "4") {

        }
        else if (menuItem == "5") {

        }
        else if (menuItem == "6") {
            break;
        }
        else {
            std::cout << "input gresit\n";
        }
    }
    return 0;
}
