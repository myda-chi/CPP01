#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
    std::cout << this->__name << " is destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->__name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
    this->__name = name;
}
