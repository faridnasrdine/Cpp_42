/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:18:51 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/14 13:18:52 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) 
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for(int i = 1; i < ac; i++)
    {
        std::string s = av[i];
        for(int j = 0; j < s.length(); j++)
        {
            std::cout << static_cast<char>(std::toupper(s[j]));
        }
    }
    std:: cout << std::endl;
}
