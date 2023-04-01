//#include "abonament.h"
#include "persoana.h"

int main()
{
    //de facut castingul la pointeri astfel incat abonament sa tina minte si premium si normal;
    //de asemenea, dupa va trebui schimbat in Abonat din Abonament abonament in Abonament* abonament;

    //Abonament A("marud", 12.59, 12);
    //Abonament_premium B(10, "salutare", 12.69, 2130);
    //Persoana marcel("salutmarcel", "318381", 12);

    Abonament* p;
    Abonament_premium D;
    p = &D;
    std::cin >> p;
    std::cout << p;


    //std::shared_ptr<Abonament> p = std::make_shared<Abonament_premium>(12, "salutttt", 120, 39);

    std::cout << "Hello World!\n";
    return 0;
}
