#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm()
{
    target = "Defult";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
: AForm(other), target(other.target)
{
}


RobotomyRequestForm::RobotomyRequestForm(const std::string& t)
: AForm("RobotomyRequestForm", 72, 45), target(t)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if(this != &other)
        target = other.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "drilling noises" << std::endl;

    int random_number = std::rand();
    if(random_number % 2)
    {
        std::cout << target << " has been robotomized successfully"
        << std::endl;
    }
    else{
        std::cout << target << " that the robotomy failed"
        << std::endl;
    }
}