/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:45 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:47 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(Character const& other): _name(other._name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = other;
}

Character& Character::operator=(Character const& other)
{
	int	i;

	if (this != &other)
	{
		_name = other._name;
		i = -1;
		while (++i < 4 && _materia[i])
			delete _materia[i];
		i = -1;
		while (++i < 4 && other._materia[i])
			_materia[i] = other._materia[i]->clone();
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
