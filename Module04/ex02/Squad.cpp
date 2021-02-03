/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:08:52 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:08:53 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _nbUnit(0)
{
	_lst = new SquadList;
	_lst->elem = 0;
	_lst->next = 0;
}

Squad::Squad(Squad const &other) : _nbUnit(other._nbUnit)
{
	_lst = copySquad(other._lst);
}

SquadList *Squad::copySquad(SquadList *other)
{
	SquadList *_new;

	_new = new SquadList;
	if (other && other->elem)
	{
		_new->elem = other->elem->clone();
		_new->next = Squad::copySquad(other->next);
	}
	else
	{
		_new->elem = 0;
		_new->next = 0;
	}
	return (_new);
}

Squad &Squad::operator=(Squad const &other)
{
	if (_lst)
	{
		SquadList *item;
		SquadList *next;
		item = _lst;
		while (item)
		{
			next = item->next;
			if (item->elem)
				delete item->elem;
			delete item;
			item = next;
		}
	}
	_lst = copySquad(other._lst);
	_nbUnit = other._nbUnit;
	return (*this);
}

Squad::~Squad(void)
{
	if (_lst)
	{
		SquadList *item;
		SquadList *next;
		item = _lst;
		while (item)
		{
			next = item->next;
			if (item->elem)
				delete item->elem;
			delete item;
			item = next;
		}
	}
	_lst = 0;
}

int Squad::getCount() const
{
	return (_nbUnit);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	SquadList 	*lst;
	int			j;

	j = -1;
	lst = this->_lst;
	if (i >= this->_nbUnit)
		return (NULL);
	while (++j < i && lst && lst->next)
		lst = lst->next;
	if (!lst)
		return (NULL);
	return (lst->elem);
}

SquadList *Squad::getLast(SquadList *lst)
{
	SquadList *item;

	item = lst;
	while (item && item->next)
	{
		item = item->next;
	}
	return (item);
}

int Squad::onlyOnce(SquadList *lst, ISpaceMarine *soldier)
{
	SquadList *item;
	item = lst;
	if (!soldier)
		return (0);
	while (item)
	{
		if (item->elem == soldier)
			return (0);
		item = item->next;
	}
	return (1);
}

int Squad::push(ISpaceMarine *newUnit)
{
	SquadList	*item;

	if (newUnit && Squad::onlyOnce(this->_lst, newUnit))
	{
		item = Squad::getLast(this->_lst);
		if (item && item->elem)
		{
			item->next = new SquadList;
			item = item->next;
			item->elem = newUnit;
			item->next = 0;
		}
		else
		{
			_lst->elem = newUnit;
			_lst->next = 0;
		}
		_nbUnit++;
	}
	return (_nbUnit);
}
