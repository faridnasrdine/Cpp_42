/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:29:17 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/16 16:55:05 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>
#define yellow "\x1B[33m"
#define blue "\x1B[34m"
#define Bblue "\x1B[94m"
#define reset "\033[0m"
class phonebook
{
private:
    Contact contacts[8];
    int index;
    int size;
public:    
    ~phonebook();
    phonebook() : index(0), size(0) {}
    void add_contact(std::string data[5]);
    
    void display_contacts(int i);
    void display_specific_contact();
    int  get_size();
};



#endif