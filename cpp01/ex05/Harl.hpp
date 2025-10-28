/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:06:44 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/28 17:06:44 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
public:
    Harl();
    ~Harl();
    void complain(std::string level);
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};
#endif