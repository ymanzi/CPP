
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){}
MateriaSource::MateriaSource(MateriaSource const& other)
{
	*this = other;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other._materia[i])
				_materia[i] = other._materia[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
}

void MateriaSource::learnMateria(AMateria* other)
{
	int i = 0;
	int done = 0;

	while(i  < 4 && !done)
	{
		if (!_materia[i])
		{
			_materia[i] = other->clone();
			done = 1;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	int done = 0;
	while (i < 4 && !done)
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
		i++;
	}
	return (0);
}