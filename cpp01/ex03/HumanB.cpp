/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:07:04 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:07:05 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

void HumanB::attack()
{
    std::cout << this->name <<  " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string str)
{
    this->name = str;
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}