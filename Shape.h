#ifndef SHAPE_H
#define SHAEP_H

#include <iostream>

class Shape
{
public:
    /*
        * @class Shape
        * @author András Zemes
        * @return void
        * @param int dimensions [x/y]
        * @param char symbol
        * @desc
            Draw square shape to command line according to dimensions and symbol specified. Maximum width / height is 25 units.
            Napíšte program, ktorý na obrazovke vytvorí štvorec zo znakov „*“ . Poèet znakov naèítajte zo vstupu, maximálna hodnota je 25.
    */
    static void draw_square(int dimensions, char symbol)
    {
        if(dimensions <= 25) {
            for(int i=0; i<dimensions; i++)
            {
                for(int i=0; i<dimensions; i++)
                {
                    std::cout << symbol << ' ';
                }
                std::cout << std::endl;
            }
        }
    }
};

#endif // SHAPE_H
