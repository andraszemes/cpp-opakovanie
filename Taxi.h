#ifndef TAXI_H
#define TAXI_H

#include <map>

/*
    * @class Taxi
    * @author András Zemes
    * desc
        Napíšte program, ktorý zo zadanej vzdialenosti vypoèíta platbu taxikárovi, pod¾a sadzobej tabu¾ky:
        0 – 19km 2 Eur/km
        20 – 39km 1,8 Eur/km
        40 – 59km 1,6 Eur/km
        60km a viac 1,4 Eur/km
        Zadaná vzdialenos môže by desatinné èíslo.
*/
class Taxi
{
public:
    Taxi() {}
    /*
        * @return void
        * @param int cena od km [km]
        * @param double cena na km [EUR]
        * @desc
        Nastaví hodnotu v cenníku.
    */
    cena(int km, double cena)
    {
        cennik.emplace(km, cena);
    }

    /*
        * @return double platba taxikára
        * @param double odjazdená vzdialenos
        * @desc
        Vráti platbu taxikára pod¾a nastavených hodnôt v cenníku.
    */
    double platba(double vzdialenost)
    {
        for(auto i=cennik.rbegin(); i!=cennik.rend(); i++)
        {
            if(vzdialenost >= i->first)
            {
                return vzdialenost * i->second;
            }
        }
    }

private:
    std::map<int, double> cennik;
};

#endif // TAXI_H
