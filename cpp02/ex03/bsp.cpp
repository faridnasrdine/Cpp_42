/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:40 by nafarid           #+#    #+#             */
/*   Updated: 2025/12/04 16:00:15 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const &P1, Point const &P2, Point const &P3)
{
    float result =
        (P1.getX().toFloat() * (P2.getY().toFloat() - P3.getY().toFloat()) +
         P2.getX().toFloat() * (P3.getY().toFloat() - P1.getY().toFloat()) +
         P3.getX().toFloat() * (P1.getY().toFloat() - P2.getY().toFloat())) / 2.0f;

    if (result < 0)
        result = -result;
    else
        result = result;

    return Fixed(result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed A  = area(a, b, c);
    Fixed A1 = area(point, b, c);
    Fixed A2 = area(a, point, c);
    Fixed A3 = area(a, b, point);

    if (A1 + A2 + A3 == A)
    {
        if (A1 == Fixed(0) || A2 == Fixed(0) || A3 == Fixed(0))
            return false;
        return true;
    }
    return false;
}

