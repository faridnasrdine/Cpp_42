/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:40 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/07 15:51:41 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const &P1, Point const &P2, Point const &P3)
{
    return Fixed(P1.getX().toFloat() * (P2.getY().toFloat() - P3.getY().toFloat()) + 
                 P2.getX().toFloat() * (P3.getY().toFloat() - P1.getY().toFloat()) +
                 P3.getX().toFloat() * (P1.getY().toFloat() - P2.getY().toFloat()) / 2.0F);
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed A = area(a,b,c);
    if(A < Fixed(0))
    {
        A = Fixed(-A.toFloat());
    }
    Fixed A1 = area(point,b,c);
    if(A1 < Fixed(0))
    {
        A1 = Fixed(-A1.toFloat());
    }
    Fixed A2 = area(a,point,c);
    if(A2 < Fixed(0))
    {
        A2 = Fixed(-A2.toFloat());
    }
    Fixed A3 = area(a,b,point);
    if(A3 < Fixed(0))
    {
        A3 = Fixed(-A3.toFloat());
    }
    
    if((A1 + A2 + A3) == A)
    {
        if(A1 == Fixed(0) || A2 == Fixed(0) || A3 ==Fixed(0))
            return false;
        return true;
    }
    return false;
}
