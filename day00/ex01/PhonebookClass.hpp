#ifndef __PHONEBOOKCLASS_HPP_
# define __PHONEBOOKCLASS_HPP_

# include "ContactClass.hpp"
# include <string>
# include <iostream>

class Phonebook
{
private:
	int _index;
	int _full;

	Contact _contact[8];

public:
	void init_contacts();
	void add_new_contact();
	void print_index_cont(int i);
	void set_full();

	static void print_contact_atribute(std::string);

	int print_contacts_table();
	int get_index();
	int get_full();

	Phonebook(void);
};

#endif
