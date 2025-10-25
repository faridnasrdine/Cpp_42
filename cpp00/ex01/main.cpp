#include "phone.hpp"

int valid_phone(std::string number)
{
	if (number.empty())
		return 1;

	for (size_t i = 0; i < number.length(); i++)
	{
		if (number[i] < '0' || number[i] > '9')
			return 1;
	}
	return 0;
}

bool get_input(const std::string &prompt, std::string &input)
{
	std::cout << prompt;
	if (!std::getline(std::cin, input))
	{
		if (std::cin.eof())
		{
			std::cout << std::endl
					  << red << "EOF detected. Exiting..." << reset << std::endl;
			return false;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return true;
}

int main()
{
	phonebook phone;
	std::string input;
	std::string contact[5];

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

	while (true)
	{
		if (!get_input("Choose An Operation <ADD> , <SEARCH> , <EXIT>  : ", input))
			break;

		if (input == "ADD")
		{
			std::cout << green << "First Name: " << reset;
			if (!std::getline(std::cin, contact[0]))
			{
				if (std::cin.eof())
				{
					std::cout << std::endl
							  << red << "EOF detected. Exiting..." << reset << std::endl;
					break;
				}
			}
			if (contact[0].empty())
			{
				std::cout << red << "First name cannot be empty. Please try again." << reset << std::endl;
				continue;
			}

			std::cout << green << "Last Name: " << reset;
			if (!std::getline(std::cin, contact[1]))
			{
				if (std::cin.eof())
				{
					std::cout << std::endl
							  << red << "EOF detected. Exiting..." << reset << std::endl;
					break;
				}
			}
			if (contact[1].empty())
			{
				std::cout << red << "Last name cannot be empty. Please try again." << reset << std::endl;
				continue;
			}

			std::cout << green << "Nick Name: " << reset;
			if (!std::getline(std::cin, contact[2]))
			{
				if (std::cin.eof())
				{
					std::cout << std::endl
							  << red << "EOF detected. Exiting..." << reset << std::endl;
					break;
				}
			}
			if (contact[2].empty())
			{
				std::cout << red << "Nick name cannot be empty. Please try again." << reset << std::endl;
				continue;
			}

			std::cout << green << "Phone Number: " << reset;
			if (!std::getline(std::cin, contact[3]))
			{
				if (std::cin.eof())
				{
					std::cout << std::endl
							  << red << "EOF detected. Exiting..." << reset << std::endl;
					break;
				}
			}
			if (contact[3].empty())
			{
				std::cout << red << "Phone number cannot be empty. Please try again." << reset << std::endl;
				continue;
			}
			else if (valid_phone(contact[3]))
			{
				std::cout << red << "Invalid phone number format. Please enter a valid phone number." << reset << std::endl;
				continue;
			}

			std::cout << green << "Darkest Secret: " << reset;
			if (!std::getline(std::cin, contact[4]))
			{
				if (std::cin.eof())
				{
					std::cout << std::endl
							  << red << "EOF detected. Exiting..." << reset << std::endl;
					break;
				}
			}
			if (contact[4].empty())
			{
				std::cout << red << "Darkest Secret cannot be empty. Please try again." << reset << std::endl;
				continue;
			}

			phone.add_contact(contact);
			std::cout << green << "Contact added successfully!" << reset << std::endl;
		}
		else if (input == "SEARCH")
		{
			phone.display_specific_contact();
			std::cout << "Please enter your index: ";

			int index;
			if (!(std::cin >> index))
			{
				if (std::cin.eof())
				{
					std::cout << std::endl
							  << red << "EOF detected. Exiting..." << reset << std::endl;
					break;
				}
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << red << "Invalid input. Please enter a number." << reset << std::endl;
				continue;
			}
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			if (index < 0 || index >= phone.get_size())
			{
				std::cout << red << "Your index is not valid, please try again." << reset << std::endl;
				continue;
			}
			phone.display_contacts(index);
		}
		else if (input == "EXIT")
		{
			std::cout << green << "Goodbye!" << reset << std::endl;
			break;
		}
		else
		{
			std::cout << red << "Invalid command, please try again." << reset << std::endl;
		}
	}

	return 0;
}
