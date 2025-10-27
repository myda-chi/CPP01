#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name),  _weapon(NULL)
{
}
HumanB::~HumanB()
{
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = (Weapon*)&weapon;
}
void HumanB::attack()const
{
    if(_weapon != NULL)
        std::cout <<this->_name<<" attack with " <<this->_weapon->getType()<<std::endl;
    else
        std::cout << this->_name <<" don't have a weapon to attack" << std::endl;

}