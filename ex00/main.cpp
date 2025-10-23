#include "Zombie.hpp"

#include <iostream>

int main()
{
    Zombie zombie1 = Zombie("yda");
    Zombie* zombie2 = newZombie("ada");
    zombie2->announce();
    delete zombie2;
    randomChump("ada");
}