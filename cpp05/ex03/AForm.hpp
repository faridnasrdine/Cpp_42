#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;

public:
    AForm();
    AForm(const std::string& n, int gS, int gE);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    virtual void executeAction() const = 0;

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& b);
    void execute(Bureaucrat const & executor) const;
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
    class NotSignedException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Form is not signed!";
        }
    };
};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif
