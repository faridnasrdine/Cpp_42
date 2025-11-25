/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:52:02 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/07 15:52:03 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
   std::cout <<  "Default constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called\n";
    operator=(a);

}
Fixed& Fixed::operator=(const Fixed &c)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &c)
        this->_value = c._value;
    return *this;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const int b)
{
    std::cout << "Int constructor called\n";
    _value = b << Bits;
}

Fixed::Fixed(const float c)
{
    std::cout << "Float constructor called\n";
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