/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:29:17 by nafarid           #+#    #+#             */
/*   Updated: 2025/10/15 17:33:04 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

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
    
    void display_contacts();
    void display_specific_contact();
};



#endif