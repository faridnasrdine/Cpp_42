#include "phone.hpp"

int valid_phone(std::string number)
{
    for(int i = 0; number[i]; i++)
    {
        if(number[i] >= '0' && number[i] <= '9')
            return 0;
    }
    return 1;
}
int main()
{
    phonebook phone;
    std::string input;
    std::string contact[5];
    while(1)
    {
        std::getline(std::cin, input);
        if(input == "ADD")
        {
            std::cout << " First Name" << std::endl;
            std::getline(std::cin, contact[0]);
            std::cout << " Last Name" << std::endl;
            std::getline(std::cin, contact[1]);
            std::cout << " Nick Name" << std::endl;
            std::getline(std::cin, contact[2]);
            std::cout << " Phone Number" << std::endl;
            std::getline(std::cin, contact[3]);
            if(valid_phone(contact[3]))
            {
                std::cout << " Number phone invalid please try agin" << std::endl;
                continue;
            }
            std::cout << " darkest Secret" << std::endl;
            std::getline(std::cin, contact[4]);
            phone.add_contact(contact);

        }
        if(input == "SEARCH")
        {
            phone.display_specific_contact();
        }
        if(input == "EXIT")
            break;
    }
}