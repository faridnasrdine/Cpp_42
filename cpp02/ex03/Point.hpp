/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:29 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/17 19:06:44 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_FPP
#include <iostream>
#include <cmath>
#include "Fixed.hpp"
class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(float x, float y);
    Point(const Point &a);
    Point &operator=(const Point &a);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif