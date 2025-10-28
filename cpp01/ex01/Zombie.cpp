/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:07:41 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:07:41 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
void Zombie::setZombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}
void Zombie::announce()
{
    std::cout << "Zombie " << this->name << ": Braiiiiiiinnnssss..." << std::endl;
}
