#include "Character.hpp"

Character::Character(std::string name): _name(name)
{}

Character::Character(Character const& other): _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (other._materia[i])
			_materia[i] = other._materia[i]->clone();
	}
}

Character& Character::operator=(Character const& other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete _materia[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other._materia[i])
				_materia[i] = other._materia[i]->clone();
		}	
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	int done = 0;
	while (i < 4 && !done)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			done = 1;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (_materia[idx])
		_materia[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && _materia[idx])
		_materia[idx]->use(target);
}