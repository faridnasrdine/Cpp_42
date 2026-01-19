#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm()
{
    target = "Defult";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
: AForm(other), target(other.target)
{
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& t)
: AForm("ShrubberyCreationForm", 145, 137), target(t)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if(this != &other)
        target = other.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::executeAction() const
{
    std::ofstream ofs((target + "_shrubbery").c_str());
    if(!ofs)
        return;
    ofs <<
"       _-_\n"
"    /~~   ~~\\\n"
" /~~         ~~\\\n"
"{               }\n"
" \\  _-     -_  /\n"
"   ~  \\\\ //  ~\n"
"_- -   | | _- _\n"
"  _ -  | |   -_\n"
"      // \\\\\n";
}