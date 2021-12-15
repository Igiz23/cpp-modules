#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
//	Animal test1;
	std::string test;
	std::cout << "-----Main test-------" << std::endl;
	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << "---------------" << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << "---------------" << std::endl;
		delete dog;
		delete cat;
	}
	std::getline(std::cin, test);
	{
		std::cout << "---------------" << std::endl;
		const Animal *ar[10];
		for (int i = 0; i < 10 ; i++)
		{
			std::cout << i << ")" << std::endl;
			if ((rand() % 2) == 0)
				ar[i] = new Cat();
			else
				ar[i] = new Dog();
			std::cout << ar[i]->getType() << std::endl;;
			ar[i]->makeSound();
		}
		std::cout << "---------------" << std::endl;
		for (int i = 0; i < 10 ; i++)
		{
			std::cout << i << ")" << std::endl;
			delete ar[i];
		}
	}
	std::cout << "---------------" << std::endl;
	std::getline(std::cin, test);
	std::cout << "--Assignation test-------" << std::endl;
	{
		Dog* dog = new Dog();
		Dog* dogCopy = new Dog();
		std::cout << "---------------" << std::endl;
		std::cout << "--Dog assignation" << std::endl;
		*dog = *dogCopy;
		std::cout << "---------------" << std::endl;
		std::cout << "--Destructor" << std::endl;
		delete dog;
		delete dogCopy;
	}
	std::getline(std::cin, test);

	std::cout << "---------------" << std::endl;
	std::cout << "--Copy constructor test" << std::endl;
	{
		std::cout << "---------------" << std::endl;
		Cat* cat = new Cat();
		std::cout << "--Cat copy" << std::endl;
		Cat copyCat(*cat);
		std::cout << "---------------" << std::endl;
		delete cat;
	}
	std::getline(std::cin, test);
	return (0);
}