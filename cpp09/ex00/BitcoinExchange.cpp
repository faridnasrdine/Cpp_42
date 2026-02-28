#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        _database = other._database;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}   

bool BitcoinExchange::IsValidDate(const std::string& date)
{
    if(date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if(year < 2009)
        return false;
    if(month < 1 || month > 12)
        return false;
    if(day < 1 || day > 31)
        return false;
    return true;
}

bool BitcoinExchange::IsValidValue(const std::string& value, double& outValue)
{
    char *end;
    outValue = strtod(value.c_str(), &end);
    if(*end != '\0')
        return false;
    if(outValue < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    if(outValue > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}



void BitcoinExchange::LoadDatabaseFromFile(const std::string& filename)
{

}

void BitcoinExchange::LoadDatabase(const std::string& filename)
{
     std::ifstream file(filename.c_str());
     if(!file)
     {
        std::cerr << "c" << std::endl;
        return ;
     }
     std::string str;

}

void BitcoinExchange::ProcessInput(const std::string& filename)
{


}

