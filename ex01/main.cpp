#include "phone.hpp"

int valid_phone(std::string number)
{
    for (int i = 0; i < number.length(); i++)
    {
        if (number[i] < '0' || number[i] > '9')
            return 1;  
    }
    return 0;
}
int main()
{
    phonebook phone;
    std::string input;
        std::string first_name;

    std::string contact[5];
    int index;
    std::cout << Bblue << "*******************************************************" << reset << std::endl;
    std::cout << Bblue << "*                                                     *" << reset << std::endl;
    std::cout << Bblue << "*  " << yellow << "__        __   _                            _        " << Bblue << "*" << reset << std::endl;
    std::cout << Bblue << "*  " << yellow << "\\ \\      / /__| | ___ ___  _ __ ___   ___  | |_ ___  " << Bblue << "*" << reset << std::endl;
    std::cout << Bblue << "*  " << yellow << " \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\ " << Bblue << "*" << reset << std::endl;
    std::cout << Bblue << "*  " << yellow << "  \\ V  V /  __/ | (_| (_) | | | | | |  __/ | || (_) |" << Bblue << "*" << reset << std::endl;
    std::cout << Bblue << "*  " << yellow << "   \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/ " << Bblue << "*" << reset << std::endl;
    std::cout << Bblue << "*                                                     *" << reset << std::endl;
    std::cout << Bblue << "*                " << yellow << "PHONEBOOK APPLICATION" << Bblue << "                 *" << reset << std::endl;
    std::cout << Bblue << "*                                                     *" << reset << std::endl;
    std::cout << Bblue << "*******************************************************" << reset << std::endl;
    while(1)
    {
        std::cout << "Choose An Operation <ADD> , <SEARCH> , <EXIT>  : ";
        std::getline(std::cin, input);
        if(input == "ADD")
        {
            std::cout << green << "First Name: " << reset;
            std::getline(std::cin, contact[0]);
            if(contact[0].empty())
            {
                std::cout << red << "First name cannot be empty. Please try again." << reset << std::endl;
                continue;
            }
            std::cout << green << "Last Name: " << reset;
            std::getline(std::cin, contact[1]);
            if(contact[1].empty())
            {
                std::cout << red << "Last name cannot be empty. Please try again." << reset << std::endl;
                continue;
            }
            std::cout << green << "Nick Name: " << reset;
            std::getline(std::cin, contact[2]);
            if(contact[2].empty())
            {
                std::cout << red << "Nick name cannot be empty. Please try again." << reset << std::endl;
                continue;
            }
            std::cout << green << "Phone Number: " << reset;
            std::getline(std::cin, contact[3]);
            if(contact[3].empty())
            {
                std::cout << red << "Phone number cannot be empty. Please try again." << reset << std::endl;
                continue;
            }
            else if(valid_phone(contact[3]))
            {
                std::cout << red << "Invalid phone number format. Please enter a valid phone number." << reset << std::endl;
                continue;
            }
            std::cout << green << "Darkest Secret: " << reset;
            if(contact[3].empty())
            {
                std::cout << red << "Darkest Secret cannot be empty. Please try again."      << reset << std::endl;
                continue;
            }
            std::getline(std::cin, contact[4]);

            phone.add_contact(contact);
        }
        else if(input == "SEARCH")
        {
            phone.display_specific_contact();
            std::cout << "Please eter your index: ";
            std::cin >> index;
            if(index < 0 || index > phone.get_size())
            {
                std::cout << red << "Your index is not valid, please try again: " << reset;
                continue;
            }
            phone.display_contacts(index);
        }
        else if(input == "EXIT")
            break;
        else
        {
            std::cout << red << "Invalid command, please try again." << reset << std::endl;
        }
    }
}
