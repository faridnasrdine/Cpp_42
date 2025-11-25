/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:57 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/07 15:51:58 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {
private:
    int _value;
    static const int Bits = 8;

public:
    Fixed();
    Fixed(const int b);
    Fixed(const float c);
    Fixed(const Fixed &a);
    Fixed &operator=(const Fixed &c);
    ~Fixed();

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
