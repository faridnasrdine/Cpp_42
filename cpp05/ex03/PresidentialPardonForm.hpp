#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
        public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& t);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();
        void executeAction() const;
};


#endif