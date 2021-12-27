/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreynold <mreynold@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:34:05 by mreynold          #+#    #+#             */
/*   Updated: 2021/12/27 23:46:52 by mreynold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

#define TT std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

int main ( void ){

	Array<int> b(4);
	Array<int> a;
	Array<std::string> strings(5);
	TT
	std::cout << "Сhecking for garbage values" << std::endl;
	TT
	for(unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " " << std::flush;
	std::cout << std::endl;

	strings[0] = "First";
	strings[1] = "Second";
	strings[2] = "Third";
	strings[3] = "Fourth";
	strings[4] = "Fifth";

	a = b;
	b[3] = 5;
	a[3] = 10;
	TT
	if (a[3] != b[3])
		std::cout << "Changes in 'a' did not affect variables 'b'" << std::endl;

	b[0] = 1324;
	b[1] = 999;

	Array<int> c(b);
	TT
	bool check = true;
	for(unsigned int i = 0; i < b.size(); i++) {
		if (b[i] != c[i])
			check = false;
	}
	if (check)
		std::cout << "True 'c' is a complete copy of 'b'" << std::endl;

	TT
	try {
		for(int i = 0; i < 10; i++)
			std::cout << strings[i] << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << "Out of allocated memory" << std::endl;
		std::cout << ex.what() << std::endl;
	}
	return (0);
}
