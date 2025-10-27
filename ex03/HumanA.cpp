#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &Weapon): _name(name), _weapon(Weapon)
{
}
HumanA::~HumanA()
{
}

void HumanA::attack()const
{
    std::cout <<this->_name<<" attack with " <<this->_weapon.getType()<<std::endl;
}
