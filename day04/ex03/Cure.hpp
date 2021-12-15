#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"

class Cure: public AMateria // Материя жизни
{
public:
	Cure();
	Cure(Cure const & copy);
	virtual AMateria* clone() const;
	virtual ~Cure();
	virtual void use(ICharacter &target);
};

#endif