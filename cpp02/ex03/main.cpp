/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:23 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/17 18:15:46 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


int main()
{
    // Point a(0, 0);
    // Point b(10, 0);
    // Point c(0, 10);

    // Point P(3, 3);

    // std::string s;
    // if (bsp(a,b,c,P) == true)
    //     s = "true";
    // else
    //     s = "false";
    // std::cout << "Point is Inside: " << s << std::endl;

    Point a(1,5), b(2,3) ;

    Point c;
    
    c = b;

    std::cout << "c x : " << c.getX().toInt() << std::endl; 
    std::cout << "c y : " << c.getY().toInt() << std::endl;    


    return 0;
}
