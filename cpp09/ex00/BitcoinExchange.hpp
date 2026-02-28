#ifndef BITCOINEXCHANGE_HHP
#define BITCOINEXCHANGE_HHP

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string, double> _database;
        bool IsValidDate(const std::string& date);
        bool IsValidValue(const std::string& value, double& outValue);
        void LoadDatabaseFromFile(const std::string& filename);
        
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();
        void LoadDatabase(const std::string& filename);
        void ProcessInput(const std::string& filename);
};


#endif