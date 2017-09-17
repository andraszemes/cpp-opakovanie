#include <iostream>
#include <Tvar.h>
#include <Taxi.h>
#include <GulovyZasobnik.h>

int main()
{
    Tvar::stvorec(10, '*');

    Taxi jazda;
    jazda.cena(0, 2);
    jazda.cena(20, 1.8);
    jazda.cena(40, 1.6);
    jazda.cena(60, 1.4);
    std::cout << jazda.platba(20);

    std::cout << std::endl;

    GulovyZasobnik voda(3, 500);
    std::cout << voda.vystaci_na_dni();

    return 0;
}
