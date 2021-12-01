#include "PhonebookClass.hpp"

Phonebook::Phonebook (void)
{
	this->_index = 0;
	this->_full = 0;
	return;
}

void Phonebook::set_full()
{
	this->_full = 1;
}

int Phonebook::get_index()
{
	return (this->_index);
}

int Phonebook::get_full(){
	return (this->_full);
}

static void check_new_contact_fields(std::string message, std::string *line)
{
	*line = "";
	while (*line == "")
	{
		std::cout << message;
		std::getline(std::cin, *line);
		if (std::cin.eof())
			exit (1);
	}
	return ;
}

void Phonebook::add_new_contact()
{
	std::string line;

	std::cout << std::endl;
	check_new_contact_fields("insert first name: ", &line);
	this->_contact[this->_index].set_first_name(line);

	check_new_contact_fields("insert last name: ", &line);
	this->_contact[this->_index].set_last_name(line);

	check_new_contact_fields("insert nickname: ", &line);
	this->_contact[this->_index].set_nickname(line);

	check_new_contact_fields("insert phone number: ", &line);
	this->_contact[this->_index].set_phone_number(line);

	check_new_contact_fields("insert darkest secret: ", &line);
	this->_contact[this->_index].set_darkest_secret(line);

	std::cout << "contact for " << this->_contact[this->_index].get_first_name() << \
	" "<< this->_contact[this->_index].get_last_name() << " was added" << std::endl;

	this->_index++;
	if (this->_index == 8)
	{
		this->_index = 0;
		this->set_full();
	}
}

void Phonebook::init_contacts()
{
	this->_contact[this->_index].set_first_name("");
	this->_contact[this->_index].set_last_name("");
	this->_contact[this->_index].set_nickname("");
	this->_contact[this->_index].set_phone_number("");
	this->_contact[this->_index].set_darkest_secret("");
}

void Phonebook::print_contact_atribute(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else if (str.length() < 10)
	{
		for (int i = (10 - str.length()); i >= 1; i--)
			std::cout << " ";
		std::cout << str << "|";
	}
	else
		std::cout << str << "|";
}

static void	get_id(int id)
{
	for (int i = 9; i >= 1; i--)
		std::cout << " ";
	std::cout << id << "|";
}



int Phonebook::print_contacts_table()
{
	if (_contact[0].get_first_name() == "" && _contact[0].get_last_name() == ""\
	&& _contact[0].get_nickname() == "" && _contact[0].get_phone_number() == ""\
	&& _contact[0].get_darkest_secret() == "")
	{
		std::cout << "Phonebook is empty" << std::endl;
		return (1);
	}
	int i = 0;
	std::cout << "┌-------------------------------------------┐" << std::endl;
	std::cout << "|        id|first name| last name| nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while ((i < this->get_index() && this->get_full() == 0) || (i < 8 && this->get_full() == 1))
	{
		if (i != 0)
			std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|";
		get_id(i + 1);
		this->print_contact_atribute(this->_contact[i].get_first_name());
		this->print_contact_atribute(this->_contact[i].get_last_name());
		this->print_contact_atribute(this->_contact[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "└-------------------------------------------┘" << std::endl;
	return (0);
}

void Phonebook::print_index_cont(int i)
{
	if (_contact[i].get_first_name() == "" && _contact[i].get_last_name() == ""\
	&& _contact[i].get_nickname() == "" && _contact[i].get_phone_number() == ""\
	&& _contact[i].get_darkest_secret() == "")
		std::cout << "contact is empty" << std::endl;
	else
	{
		std::cout << "first name: " << this->_contact[i].get_first_name() << std::endl;
		std::cout << "last name: " << this->_contact[i].get_last_name() << std::endl;
		std::cout << "nickname: " << this->_contact[i].get_nickname() << std::endl;
		std::cout << "phone number: " << this->_contact[i].get_phone_number() << std::endl;
		std::cout << "darkest secret: " << this->_contact[i].get_darkest_secret() << std::endl;
	}
}
