/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:52:07 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/07 15:52:08 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int _value;
    public:
        Fixed();
        Fixed(const Fixed &a);
        Fixed& operator=(const Fixed c);
        ~Fixed();
        int getRawBits();
};
#endif