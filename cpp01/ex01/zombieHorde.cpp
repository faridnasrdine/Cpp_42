/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:57:56 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/25 14:57:56 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return NULL;
    Zombie* hord = new Zombie[N];
    for(int i = 0; i < N; i++)
        hord[i].setZombie(name);
    return hord;
}
