#include <stdint.h>
#include <iostream>

struct Data {
	std::string 	name;
	int 			age;
};

uintptr_t 		serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*			deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int 	main(void) {
	Data			data;
	Data			after;
	uintptr_t 		p1;
	uintptr_t 		p2;


	data.name = "DenisDushka";
	data.age = 42;
	p1 = serialize(&data);
	std::cout << "------------------------------" << std::endl;
	std::cout << p1 << std::endl;
	std::cout << p1 << std::endl;
	p2 = p1;
	after = *deserialize(p2);
	std::cout << "------------------------------" << std::endl;
	std::cout << after.name << std::endl;
	std::cout << after.age << std::endl;
}
