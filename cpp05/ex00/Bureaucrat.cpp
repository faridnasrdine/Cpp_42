#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{

}
Bureaucrat::Bureaucrat(const std::string& n, int g) : name(n)
{
    if(g < 1)
        throw GradeTooHighException();
    else if (g > 150)
        throw GradeTooLowException();
    grade = g;
}
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
    grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if(this != &other)
        grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}
void Bureaucrat::decrementGrade()
{
    if(grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::incrementGrade()
{
    if(grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return out;
}
