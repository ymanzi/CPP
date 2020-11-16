#	ifndef MATERIASOURCE_HPP
#	define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const& other);
	MateriaSource &operator=(MateriaSource const& other);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#	endif