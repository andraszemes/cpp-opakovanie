#ifndef TVAR_H
#define TVAR_H

#include <iostream>

class Tvar
{
public:
    /*
        * @class Tvar
        * @author András Zemes
        * @return void
        * @param int šírka/výška
        * @param char znak
        * @desc
            Napíšte program, ktorý na obrazovke vytvorí štvorec zo znakov „*“ . Poèet znakov naèítajte zo vstupu, maximálna hodnota je 25.
    */
    static void stvorec(int rozmery, char znak)
    {
        if(rozmery <= 25) {
            for(int i=0; i<rozmery; i++)
            {
                for(int i=0; i<rozmery; i++)
                {
                    std::cout << znak << ' ';
                }
                std::cout << std::endl;
            }
        }
    }
};

#endif // TVAR_H
