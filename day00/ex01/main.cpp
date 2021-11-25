#include <cstring>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

int	main()
{
	Phonebook book;
	std::string line;

	line = "";
	while (true)
	{
		std::cout << std::endl << "insert a command: ";
		std::getline(std::cin, line);
		if (line == "EXIT")
			break ;
		if (line == "ADD")
		{
			std::cout << "contact # " << book.get_index() + 1 << std::endl;
			book.add_new_contact();
		}
		else if (line == "SEARCH")
		{
			if (!book.print_contacts_table())
			{
				while (1)
				{
					std::cout << "insert contact id: ";
					std::getline(std::cin, line);
					if (std::strchr("12345678",line[0]) && line.length() == 1)
					{
						std::cout << std::endl;
						book.print_index_cont((int)(line[0] - 49));
						break;
					}
					else
						std::cout << "insert index from 1 to 8" << std::endl;
				}
			}
		}
		else if (line != "EXIT")
			std::cout << "please enter one of the following commands: ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "You exited the program. Contacts lost." << std::endl;
	return (0);
}