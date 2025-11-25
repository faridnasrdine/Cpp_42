/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:51:46 by nafarid           #+#    #+#             */
/*   Updated: 2025/11/07 15:51:47 by nafarid          ###   ########.fr       */
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
        // 6 comparison operators:
        bool operator>(const Fixed &c) const;
        bool operator<(const Fixed &c)const;
        bool operator>=(const Fixed &c)const;
        bool operator<=(const Fixed &c)const;
        bool operator==(const Fixed &c)const;
        bool operator!=(const Fixed &c)const;

        // 4 arithmetic operators:
        Fixed operator+(const Fixed &c);
        Fixed operator-(const Fixed &c);
        Fixed operator*(const Fixed &c);
        Fixed operator/(const Fixed &c);


        // 4 increment/decrement:
        Fixed& operator--();
        Fixed& operator++();
        Fixed operator--(int);
        Fixed operator++(int);
        
        // min and max static member function:

        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);


    };

    std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
