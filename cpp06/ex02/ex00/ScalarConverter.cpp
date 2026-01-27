#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& other){
    (void)other;}
ScalarConverter::~ScalarConverter(){}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
    (void)other;
    return *this;}

bool isChar(std::string str)
{
	if (str.length() > 1)
		return false;
	if (std::isalpha(str[0]))
		return true;
	else
		return false;
}

static bool isInt(const std::string &str)
{
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    if (i == str.length())
        return false;
    for (; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

static bool isFloat(const std::string &str)
{
    if (str == "nanf" || str == "+inff" || str == "-inff")
        return true;

    if (str[str.length() - 1] != 'f')
        return false;

    bool dot = false;
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;

    for (; i < str.length() - 1; i++)
    {
        if (str[i] == '.' && !dot)
            dot = true;
        else if (!isdigit(str[i]))
            return false;
    }
    return dot;
}


bool isDouble(const std::string &str)
{
    if (str == "nan" || str == "+inf" || str == "-inf")
        return true;

    bool dot = false;
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;

    for (; i < str.length(); i++)
    {
        if (str[i] == '.' && !dot)
            dot = true;
        else if (!isdigit(str[i]))
            return false;
    }
    return dot;
}

static void printChar(double num)
{
    std::cout <<"char: ";
    if(std::isnan(num) || std::isinf(num)
        || num > std::numeric_limits<char>::max()
        || num < std::numeric_limits<char>::min())
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    char c = static_cast<char>(num);
    if(!isprint(c))
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << c << "'\n";
}
static void printInt(double num)
{
    std::cout << "int: ";
    if(std::isnan(num) || std::isinf(num)
        || num > std::numeric_limits<int>::max()
        || num < std::numeric_limits<int>::min())
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    std::cout << static_cast<int>(num) << std::endl;
}
void printFloat(double num)
{
    std::cout << "float: ";

    if (std::isnan(num))
    {
        std::cout << "nanf\n";
        return;
    }
    if (std::isinf(num))
    {
        std::cout << (num > 0 ? "+inff\n" : "-inff\n");
        return;
    }

    float f = static_cast<float>(num);
    std::cout << f;
    if (f == static_cast<int>(f))
        std::cout << ".0";
    std::cout << "f\n";
}


void printDouble(double num)
{
    std::cout << "double: ";

    if (std::isnan(num))
    {
        std::cout << "nan\n";
        return;
    }
    if (std::isinf(num))
    {
        std::cout << (num > 0 ? "+inf\n" : "-inf\n");
        return;
    }

    std::cout << num;
    if (num == static_cast<int>(num))
        std::cout << ".0";
    std::cout << std::endl;
}

void ScalarConverter::convert(const std::string& title){

    double value;
    if(isChar(title))
        value = static_cast<double>(title[1]);
    else if(isInt(title))
        value = static_cast<double>(atoi(title.c_str()));
    else if (isFloat(title))
        value = static_cast<double>(strtof(title.c_str(), NULL));
    else if(isDouble(title))
        value = strtod(title.c_str(), NULL);
    else{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }
    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);

}
