/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:52:10 by nafarid           #+#    #+#             */
/*   Updated: 2025/12/08 12:33:41 by nafarid          ###   ########.fr       */
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
    *this = a;

}
Fixed& Fixed::operator=(const Fixed &c)
{
    std::cout << "Copy assignment operator called\n";
    this->_value = c.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return this->_value;
}