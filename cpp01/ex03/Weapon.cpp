/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:07:13 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:07:14 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}
Weapon::Weapon(const std::string str)
{
    this->type = str;
}

Weapon::Weapon() {}