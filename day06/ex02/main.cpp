#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <fcntl.h>
#include <unistd.h>


unsigned int	randomizer(void) {
	char buf[4];
	int fd = open("/dev/random", O_RDONLY);
	read(fd, buf, 4);
	unsigned int *ptr = reinterpret_cast<unsigned int *>(buf);
	close(fd) ;
	return (*ptr);
}

Base		*generate(void)
{
	unsigned int			k;

//	std::srand(time(NULL));

//	k = std::rand() % 3;
	k = randomizer() % 3;
//	std::cout << k << std::endl;
	if (k == 0) {
		std::cout << "new Type A" << std::endl;
		return (new A);
	}
	else if (k == 1) {
		std::cout << "new Type B" << std::endl;
		return (new B);
	}
	else {
		std::cout << "new Type C" << std::endl;
		return (new C);
	}
}

void 		identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "*Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "*Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "*Type C" << std::endl;
	else {
		std::cout << "conversion is not ok\n";
	}
}

void		identify(Base& p)
{
	try {
		A instance;
		instance = dynamic_cast<A&>(p);
		std::cout << "&Type A" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "&" << std::endl;
	}
	try {
		B instance;
		instance = dynamic_cast<B&>(p);
		std::cout << "&Type B" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "&" << std::endl;
	}
	try {
		C instance;
		instance = dynamic_cast<C&>(p);
		std::cout << "&Type C" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "&" << std::endl;
	}
}


int			main() {
	Base	*parent;

	parent = generate();
	identify(parent);
	identify(*parent);

	return (0);
}