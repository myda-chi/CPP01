#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    Harl level;

    if(ac == 2)
    {
        level.complain(av[1]);
    }
    else
    {
        std::cout << "Error: Invalid number of arguments." << std::endl;
        std::cout << "Usage: " << av[0] << " <level>" << std::endl;
    }
}