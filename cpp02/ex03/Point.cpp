/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:26 by nafarid           #+#    #+#             */
/*   Updated: 2025/12/04 16:08:27 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){

}
Point::~Point(){

}

Point::Point(float x, float y): x(x), y(y){
}

Point::Point(const Point &a): x(a.getX()), y(a.getY()){

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

std::ostream &operator<<(std::ostream &out, const Point &rSym)
{
    out << "x:(" << rSym.getX() << "); y:(" << rSym.getY() << ");";
    return out;
}