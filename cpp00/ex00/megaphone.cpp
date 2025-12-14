/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:18:51 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/04 13:14:50 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) 
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    for(int i = 1; i < ac; i++)
    {
        std::string s = av[i];
        for(unsigned int j = 0; j < s.length(); j++)
        {
            std::cout << char(std::toupper(s[j]));
        }
    }
    std:: cout << std::endl;
    return 0;
}
