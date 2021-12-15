#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*Cookbook[4];	// Поваренная книга материй
	int			Number_example;	// Кол-во изученных материй
public:
	MateriaSource();
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);						// Изучить метирию и записать рецепт
	virtual AMateria* createMateria(std::string const & type);	// Создать экземляр запрошенной материи
};

#endif