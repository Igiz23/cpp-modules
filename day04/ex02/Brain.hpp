#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain {
private:
	std::string idea[100];

public:
	Brain();
	Brain(Brain &);
	Brain &operator = (Brain &);
	~Brain();

};

#endif