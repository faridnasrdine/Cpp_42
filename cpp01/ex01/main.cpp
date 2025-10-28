/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:07:35 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:07:35 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;

    Zombie* horde = zombieHorde(N, "Zombie");
    if (!horde)
        return 1;
    for (int i = 0; i < N; i++)
        horde[i].announce();

    delete[] horde;
    return 0;
}