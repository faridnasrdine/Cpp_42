#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <exception>

class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat(const std::string& n, int g);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();
        void incrementGrade();
        void decrementGrade();
        std::string getName() const;
        int getGrade() const;
        void signForm(AForm& a);
        void executeForm(AForm const & form) const;
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade is too high!";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade is too low!";
            }
    };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);



#endif