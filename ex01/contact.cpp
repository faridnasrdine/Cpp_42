/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:41:43 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/15 13:29:23 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
std::string Contact::getfirst()
{
    return this->firstname;
}
std::string Contact::getlast()
{
    return this->firstname;
}
std::string Contact::getnick()
{
    return this->firstname; 
}
std::string Contact::getphone()
{
    return this->firstname;
}
std::string Contact::getsecret()
{
    return this->firstname;
}
void Contact::setfirst(std::string name)
{
    this->firstname = name;
}
void Contact::setlast(std::string name)
{
    this->firstname = name;
}
void Contact::setnick(std::string name)
{
    this->firstname = name;
}
void Contact::setphone(std::string name)
{
    this->firstname = name;
}
void Contact::setsecret(std::string name)
{
    this->firstname = name;
}
