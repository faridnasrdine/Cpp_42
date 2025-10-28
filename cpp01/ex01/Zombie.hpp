/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:07:44 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:07:44 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie();
    void setZombie(std::string name);
    ~Zombie();
    void announce();

private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif