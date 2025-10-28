/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:48:38 by myda-chi          #+#    #+#             */
/*   Updated: 2025/10/28 15:50:17 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    Harl harl;

    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    harl.complain(av[1]);
    return 0;
}
