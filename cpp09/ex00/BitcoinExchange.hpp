#ifndef BITCOINEXCHANGE_HHP
#define BITCOINEXCHANGE_HHP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string, double> _database;
        bool IsValidDate(const std::string& date);
        bool IsValidValue(const std::string& value, double& outValue);
        double getExchangeRate(const std::string& date);
        
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();
        void LoadDatabase(const std::string& filename);
        void ProcessInput(const std::string& filename);
};


#endif