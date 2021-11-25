#include "ContactClass.hpp"
#include <iostream>

Contact::Contact (void)
{
	return;
}
void Contact::set_first_name(std::string str)
{
	_first_name = str;
	return;
}
void Contact::set_last_name(std::string str)
{
	_last_name = str;
	return;
}
void Contact::set_nickname(std::string str)
{
	_nickname = str;
	return;
}
void Contact::set_phone_number(std::string str)
{
	_phone_number = str;
	return;
}
void Contact::set_darkest_secret(std::string str)
{
	_darkest_secret = str;
	return;
}
std::string Contact::get_first_name()
{
	return (_first_name);
}
std::string Contact::get_last_name()
{
	return (_last_name);
}
std::string Contact::get_nickname()
{
	return (_nickname);
}
std::string Contact::get_phone_number()
{
	return (_phone_number);
}
std::string Contact::get_darkest_secret()
{
	return (_darkest_secret);
}
