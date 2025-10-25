/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:16:04 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/14 16:16:05 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;
    
public:
    Contact();
    ~Contact();
    std::string  getfirst();
    void setfirst(std::string name);

    std::string  getlast();
    void setlast(std::string name);

    std::string  getnick();
    void setnick(std::string name);

    std::string  getphone();
    void setphone(std::string name);

    std::string  getsecret();
    void setsecret(std::string name);
};


#endif