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



double BitcoinExchange::getExchangeRate(const std::string& date)
{
    std::map<std::string, double>::iterator it = _database.lower_bound(date);

    if(it != _database.end() && it->first == date)
        return it->second;

     if (it == _database.begin())
        throw std::runtime_error("Error: no earlier date available.");
    --it;
    return it->second;
}

void BitcoinExchange::LoadDatabase(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if(!file)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }
    std::string line;
    std::getline(file, line);

    while(std::getline(file, line))
    {
        std::stringstream s(line);
        std::string date, str;
        if(std::getline(s, date, ',') && std::getline(s, str))
        {
            double value = std::atof(str.c_str());
            _database[date] = value;
        }
    }

}

void BitcoinExchange::ProcessInput(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if(!file)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }
    std::string line;
    std::getline(file, line);
    while(std::getline(file, line))
    {
        std::string::size_type pipe = line.find('|');
        if(pipe == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl; 
            continue;
        }
        std::string date = line.substr(0, pipe - 1);
        std::string str = line.substr(pipe + 2);

        if(!IsValidDate(date))
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        double value;
        if(!IsValidValue(str, value))
            continue;
        try
        {
            double r = getExchangeRate(date);
            std::cout << date << " => " << value 
            << " = " << value * r << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }

}

