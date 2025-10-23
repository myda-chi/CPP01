#include "Zombie.hpp"
#include <iostream>

int main()
{
    int len = 6;
    Zombie* Horde;
    Horde = zombieHorde(len, "hellooooo");
    for(int i=0; i < len; i++)
    {
        Horde[i].announce();
    }
    delete[] Horde;
}