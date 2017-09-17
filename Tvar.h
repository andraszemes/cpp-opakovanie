#ifndef TVAR_H
#define TVAR_H

#include <iostream>

class Tvar
{
public:
    /*
        * @class Tvar
        * @author Andr�s Zemes
        * @return void
        * @param int ��rka/v��ka
        * @param char znak
        * @desc
            Nap�te program, ktor� na obrazovke vytvor� �tvorec zo znakov �*� . Po�et znakov na��tajte zo vstupu, maxim�lna hodnota je 25.
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
