#ifndef WATERTANK_H
#define WATERTANK_H

#define M_PI 3.14159265358979323846264338327

#include <cmath>

/*
    * @class WaterTank
    * @author András Zemes
    * @desc
        1. Calculate volume of a sphere-shaped water tank in cubic meters and litres.
        2. Calculate the number of days the emergency water supply would last if n number of residents used up 10 litres/day on average.
*/
class WaterTank
{
public:
    /*
        * @param double diameter of water tank [m]
        * @param int number of residents
        * @param double (optional) average consumption of in litres/capita/day, default value is 10 l
    */
    WaterTank(double diameter, int residents, double consumption = 10)
        : diameter(diameter), residents(residents), consumption(consumption) {

            // calculate the cubic capacity of the water tank
            volume_m3 = 4/3.0 * M_PI * pow(diameter/2, 3);

            // convert volume to litres
            volume_l = volume_m3 * 1000;
    }

    /*
        * @return int calculate days covered the by emergency water supply
    */
    int print_emergency_supply_days()
    {
        return volume_l / residents / consumption;
    }

private:
    double volume_m3;
    double volume_l;
    double consumption;
    double diameter;
    int residents;
};

#endif // WATERTANK_H
