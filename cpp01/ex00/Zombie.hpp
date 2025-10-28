/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:08:12 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:08:12 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();

private:
    std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif 