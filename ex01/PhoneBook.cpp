/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:18:59 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/17 18:32:36 by nafarid          ###   ########.fr       */
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

int phonebook::get_size()
{
    return(this->size);
}
void phonebook::display_contacts(int i)
{
    
    std::cout << yellow << "First Name: " << reset << this->contacts[i].getfirst() << std::endl;
    std::cout << yellow << "Last Name: " << reset << this->contacts[i].getlast() << std::endl;
    std::cout << yellow << "Nick Name: "  << reset<< this->contacts[i].getnick() << std::endl;
    std::cout << yellow << "Phone Number: " << reset << this->contacts[i].getphone() << std::endl;
    std::cout << yellow << "Darkest Secret: " << reset << this->contacts[i].getsecret() <<  std::endl;
}


void phonebook::display_specific_contact()
{
    std::cout << std::left << std::setfill(' ');
    std::cout << "|" << blue << std::setw(7) << "index" << reset
              << "|" << blue << std::setw(10) << "FirstName" << reset
              << "|" << blue << std::setw(10) << "LastName" << reset
              << "|" << blue << std::setw(10) << "NickName" << reset
              << "|" << std::endl;
    
    std::cout << std::string(41, '-') << std::endl;
    
    for (int i = 0; i < this->size; i++)
    {
        std::string first = this->contacts[i].getfirst();
        std::string last = this->contacts[i].getlast();
        std::string nick = this->contacts[i].getnick();
        
        if (first.length() > 10) first = first.substr(0, 9) + ".";
        if (last.length() > 10) last = last.substr(0, 9) + ".";
        if (nick.length() > 10) nick = nick.substr(0, 9) + ".";
        
        std::cout << "|" << std::setw(7) << Bblue << i << reset
                << "|" << std::setw(10) << Bblue << first << reset
                << "|" << std::setw(10) << Bblue << last << reset
                << "|" << std::setw(10) << Bblue << nick << reset
                << "|" << std::endl;
    }
}
