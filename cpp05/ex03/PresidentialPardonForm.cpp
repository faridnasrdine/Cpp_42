#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm()
{
    target = "Defult";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
: AForm(other), target(other.target)
{
}


PresidentialPardonForm::PresidentialPardonForm(const std::string& t)
: AForm("PresidentialPardonForm", 25, 5), target(t)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if(this != &other)
        target = other.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::executeAction() const
{
   std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}