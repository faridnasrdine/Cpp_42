/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:07:07 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:07:08 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB();
    HumanB(const std::string str);

    void attack();
    void setWeapon(Weapon& weapon);
};



#endif