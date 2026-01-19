#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
    : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{}


AForm::AForm(const std::string& n, int gS, int gE) : name(n), isSigned(false), gradeToSign(gS), gradeToExecute(gE) 
{
    if(gS < 1 || gE < 1)
        throw GradeTooHighException();
    if(gS > 150 || gE > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : name(other.name),
      isSigned(other.isSigned),
      gradeToSign(other.gradeToSign),
      gradeToExecute(other.gradeToExecute)
{}

AForm& AForm::operator=(const AForm& other)
{
    if(this != &other)
        isSigned = other.isSigned;
    return *this;
}

AForm::~AForm(){

}

std::string AForm::getName() const{
    return name;
}

bool AForm::getIsSigned() const{
    return isSigned;
}

int AForm::getGradeToSign() const{
    return gradeToSign;
}

int AForm::getGradeToExecute() const{
    return gradeToExecute;
}


void AForm::beSigned(const Bureaucrat& b)
{
    if(b.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!isSigned)
        throw NotSignedException();
    if(executor.getGrade() > gradeToExecute)
        throw GradeTooLowException();
    executeAction();
}

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
    out << "AForm " << f.getName()
        << ", signed: " << f.getIsSigned()
        << ", grade to sign: " << f.getGradeToSign()
        << ", grade to execute: " << f.getGradeToExecute();
    return out;
}

