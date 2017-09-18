#include <iostream>
#include <Shape.h>
#include <Taxi.h>
#include <WaterTank.h>

int main()
{
    Shape::draw_square(10, '*');

    Taxi ride;
    ride.add_pricelist_entry(0, 2);
    ride.add_pricelist_entry(20, 1.8);
    ride.add_pricelist_entry(40, 1.6);
    ride.add_pricelist_entry(60, 1.4);
    std::cout << ride.calculate_fare(20);

    std::cout << std::endl;

    WaterTank water(3, 500);
    std::cout << water.print_emergency_supply_days();

    return 0;
}
