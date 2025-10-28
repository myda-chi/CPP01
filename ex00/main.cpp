/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myda-chi <myda-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:46:10 by myda-chi          #+#    #+#             */
/*   Updated: 2025/10/28 15:46:16 by myda-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
