//#include "abonament.h"
#include "persoana.h"

int main()
{
    //de facut castingul la pointeri astfel incat abonament sa tina minte si premium si normal;
    //de asemenea, dupa va trebui schimbat in Abonat din Abonament abonament in Abonament* abonament;

    Abonament A("muiepsd", 12.59, 12);
    Abonament_premium B(10, "salutare", 12.69, 2130);
    //Abonament* p;
    //p = &B;
    //std::cout << p;

    Abonament* aux = &B;
    std::cout << aux;

    std::cout << "Hello World!\n";
    return 0;
}
