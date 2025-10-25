/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:57:50 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/25 15:13:15 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address" << std::endl;
    std::cout << "String: " << &str << std::endl;
    std::cout << "StringPTR: " << stringPTR << std::endl;
    std::cout << "StringREF: " << &stringREF << std::endl;

    std::cout << "value" << std::endl;
    std::cout << "String: " << str << std::endl;
    std::cout << "StringPTR: " << *stringPTR << std::endl;
    std::cout << "StringREF: " << stringREF << std::endl;
    
}