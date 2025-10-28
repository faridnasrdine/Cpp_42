/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:07:01 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:07:02 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void HumanA::attack()
{
    std::cout << this->name <<  " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& str, Weapon& weapon) : weapon(weapon)
{
    this->name = str;
}
