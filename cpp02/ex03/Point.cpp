/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:26 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/17 19:06:46 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){

}
Point::~Point(){

}

Point::Point(float x, float y): x(x), y(y){
}

Point::Point(const Point &a): x(a.x), y(a.y){

}

Point& Point::operator=(const Point &a)
{
    (void)a;
    return *this;
}

Fixed Point::getX() const
{
    return this->x;
}
Fixed Point::getY() const
{
    return this->y;
}