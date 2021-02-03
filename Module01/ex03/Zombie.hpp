/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:51:13 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:51:14 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef	ZOMBIE_HPP
#	define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string nom);
	Zombie(std::string nom, std::string type);
	void		announce(void);
	void		setType( std::string type);
	void		setName( std::string name);
	std::string	genName(void);

	private:
	std::string	_nom;
	std::string	_type;
};

#	endif
