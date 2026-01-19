#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;

public:
    Form();
    Form(const std::string& n, int gS, int gE);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& b);

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Form grade is too high!";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Form grade is too low!";
        }
    };
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif
