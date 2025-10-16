/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:41:43 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/16 09:46:23 by nafarid          ###   ########.fr       */
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
    return this->lastname;
}
std::string Contact::getnick()
{
    return this->nickname; 
}
std::string Contact::getphone()
{
    return this->phonenumber;
}
std::string Contact::getsecret()
{
    return this->darkestsecret;
}
void Contact::setfirst(std::string name)
{
    this->firstname = name;
}
void Contact::setlast(std::string name)
{
    this->lastname = name;
}
void Contact::setnick(std::string name)
{
    this->nickname = name;
}
void Contact::setphone(std::string name)
{
    this->phonenumber = name;
}
void Contact::setsecret(std::string name)
{
    this->darkestsecret = name;
}
