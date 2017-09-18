#ifndef TAXI_H
#define TAXI_H

#include <map>

/*
    * @class Taxi
    * @author András Zemes
    * desc
        Caculate taxi fare for a certain driving distance according to the pricelist.
*/
class Taxi
{
public:
    Taxi() {}
    /*
        * @return void
        * @param int cost valid in range from [km]
        * @param double cost/km [EUR]
        * @desc
        Set pricelist entry.
    */
    add_pricelist_entry(int km, double cost)
    {
        pricelist.emplace(km, cost);
    }

    /*
        * @return double taxi ride fare
        * @param double distance
        * @desc
        Returns calculated taxi ride fare according to the entered rates in the pricelist.
    */
    double calculate_fare(double distance)
    {
        for(auto i=pricelist.rbegin(); i!=pricelist.rend(); i++)
        {
            if(distance >= i->first)
            {
                return distance * i->second;
            }
        }
    }

private:
    std::map<int, double> pricelist;
};

#endif // TAXI_H
