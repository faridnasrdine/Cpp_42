/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:18:59 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/15 17:35:35 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::~phonebook()
{
}


void phonebook::add_contact(std::string data[5])
{
    int i;
    i = this->index;
    this->contacts[i].setfirst(data[0]);
    this->contacts[i].setlast(data[1]);
    this->contacts[i].setnick(data[2]);
    this->contacts[i].setphone(data[3]);
    this->contacts[i].setsecret(data[4]);
   
    this->index = (i + 1) % 8;
    if(this->size < 8)
        this->size++;
}


void phonebook::display_contacts()
{
    int i = 0;
    std::cout << "FirstName" << this->contacts[i].getfirst() << std::endl;
    std::cout << "LastName" << this->contacts[i].getlast() << std::endl;
    std::cout << "NickName" << this->contacts[i].getnick() << std::endl;
    std::cout << "Phone" << this->contacts[i].getphone() << std::endl;
    std::cout << "Secret" << this->contacts[i].getsecret() << std::endl;
    
}
void  phonebook::display_specific_contact()
{
    int i = 0;
    
    while(i < 8)
    {
        std::cout << "|  index|  FirsName|  LastName|  NickName|";
        i++;
    }
}