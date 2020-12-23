/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:08:02 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:08:03 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ENEMY_HPP
#	define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	private:
		int			_hp;
		std::string	_type;

	public:
		Enemy(int hp = 10, std::string const& type = "Basic");
		Enemy(Enemy const& other);
		Enemy& operator=(Enemy const& other);
		virtual ~Enemy(void);

		std::string getType(void) const;
		int getHP(void) const;
		virtual void takeDamage(int damage);
};

std::ostream &operator<<(std::ostream &flux, Enemy const& other);

#	endif
