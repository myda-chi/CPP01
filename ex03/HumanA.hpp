#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    std::string _name;
    Weapon& _weapon;
public:
    HumanA(std::string name, Weapon &Weapon);
    ~HumanA();
    void attack() const;
};

#endif