/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:50 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/07 15:51:51 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{

}

Fixed::Fixed(const Fixed &a)
{
    operator=(a);
}
Fixed& Fixed::operator=(const Fixed &c)
{
    if (this != &c)
        this->_value = c._value;
    return *this;
}


Fixed::~Fixed()
{
}

Fixed::Fixed(const int b)
{
    _value = b << Bits;
}

Fixed::Fixed(const float c)
{
    _value = roundf(c * (1 << Bits)) ;
}

int Fixed::toInt(void) const
{
    return _value >> Bits;
}

float Fixed::toFloat(void) const
{
    return ((float)_value / (1 << Bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed)
{
    out << Fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &c) const
{
    return _value > c._value;
}
bool Fixed::operator<(const Fixed &c) const
{
    return _value < c._value;
}
bool Fixed::operator>=(const Fixed &c) const
{
    return _value >= c._value;
}
bool Fixed::operator<=(const Fixed &c) const
{
    return _value <= c._value;
}
bool Fixed::operator==(const Fixed &c) const
{
    return _value == c._value;
}
bool Fixed::operator!=(const Fixed &c) const
{
    return _value != c._value;
}

Fixed Fixed::operator+(const Fixed &c)
{
    Fixed f;
    f._value = _value + c._value;
    return f;
}
Fixed Fixed::operator-(const Fixed &c)
{
    Fixed f;
    f = _value - c._value;
    return f;
}
Fixed Fixed::operator*(const Fixed &c)
{
    Fixed f;
    f._value = (_value * c._value) >> Bits;
    return f;
}
Fixed Fixed::operator/(const Fixed &c)
{
    Fixed f;
    f = (_value >> Bits) / c._value;
    return f;
}

Fixed& Fixed::operator--()
{
    _value--;
    return *this;

}

Fixed& Fixed::operator++()
{
    _value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    _value++;
    return tmp;
}
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    _value--;
    return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if(a < b)
        return a;
    else
        return b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if(a > b)
        return a;
    else
        return b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a < b)
        return a;
    else
        return b;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if(a > b)
        return a;
    else
        return b;
} 