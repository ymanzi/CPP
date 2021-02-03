/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:57 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:59 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
	*this = other;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
	int	i;

	if (this != &other)
	{
		i = -1;
		while (++i < 4 && _materia[i])
			delete _materia[i];
		i = -1;
		while (++i < 4 && other._materia[i])
			_materia[i] = other._materia[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	int i;

	i = -1;
	while (++i < 4 && _materia[i])
		delete _materia[i];
}

void MateriaSource::learnMateria(AMateria* other)
{
	int i = -1;

	while(++i < 4 && _materia[i])
		;
	if (i < 4 && other)
		_materia[i] = other->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = -1;
	while (++i < 4 && _materia[i])
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (0);
}
