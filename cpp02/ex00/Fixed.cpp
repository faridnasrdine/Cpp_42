/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:52:10 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/23 16:33:54 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
   std::cout <<  "Default constructor called\n";
}

Fixed::Fixed(const Fixed &a): _value(a._value)
{
    std::cout << "Copy constructor called\n";

}
Fixed& Fixed::operator=(const Fixed c)
{
    std::cout << "Copy assignment operator called\n";
    this->_value = c._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called\n";
    return this->_value;
}