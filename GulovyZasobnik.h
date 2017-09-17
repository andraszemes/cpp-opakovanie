#ifndef GULOVYZASOBNIK_H
#define GULOVYZASOBNIK_H

#define M_PI 3.14159265358979323846264338327

#include <cmath>

/*
    * @class GulovyZasobnik
    * @author András Zemes
    * @desc
        Napíšte program, ktorý zo zadanej hodnoty priemeru vypoèíta objem gu¾ového zásobníku na vodu.
        Výslednú hodnotu vypíšte na obrazovku v metroch kubických aj v litroch.
        Predpokladajme, že zásobník je umiestnený na púštnej základni, kde žije
        n obyvate¾ov. Program naèíta hodnotu n a vypoèíta na ko¾ko dní vystaèí voda zo zásobníka ak je spotreba 10 litrov na osobu a deò.
*/
class GulovyZasobnik
{
public:
    /*
        * @param double priemer zásobníka [m]
        * @param int počet obyvateľov
        * @param double (optional) spotreba jedného obyvateľa na deň [litre], základná hodnota je 10 l/deň
    */
    GulovyZasobnik(double priemer, int obyvatelia, double spotreba = 10)
        : priemer(priemer), obyvatelia(obyvatelia), spotreba(spotreba) {

            // výpoèet objemu gule
            objem_m3 = 4/3.0 * M_PI * pow(priemer/2, 3);

            // prevod m kubických na litre
            objem_l = objem_m3 * 1000;
    }

    /*
        * @return int voda vystačí na toľkoto dní, ak obyvateľ spotrebuje 10 l/deň
    */
    int vystaci_na_dni()
    {
        return objem_l / obyvatelia / spotreba;
    }

private:
    double objem_m3;
    double objem_l;
    double spotreba;
    double priemer;
    int obyvatelia;
};

#endif // GULOVYZASOBNIK_H
