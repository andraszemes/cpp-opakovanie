#ifndef TAXI_H
#define TAXI_H

#include <map>

/*
    * @class Taxi
    * @author Andr�s Zemes
    * desc
        Nap�te program, ktor� zo zadanej vzdialenosti vypo��ta platbu taxik�rovi, pod�a sadzobej tabu�ky:
        0 � 19km 2 Eur/km
        20 � 39km 1,8 Eur/km
        40 � 59km 1,6 Eur/km
        60km a viac 1,4 Eur/km
        Zadan� vzdialenos� m��e by� desatinn� ��slo.
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
        Nastav� hodnotu v cenn�ku.
    */
    cena(int km, double cena)
    {
        cennik.emplace(km, cena);
    }

    /*
        * @return double platba taxik�ra
        * @param double odjazden� vzdialenos�
        * @desc
        Vr�ti platbu taxik�ra pod�a nastaven�ch hodn�t v cenn�ku.
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
