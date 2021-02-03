/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:50:36 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:50:38 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef	ZOMBIE_HPP
#	define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
	Zombie(std::string nom);
	Zombie(std::string nom, std::string type);
	void	announce(void);
	void	setType( std::string type);

	private:
	std::string	_nom;
	std::string	_type;
};

#	endif
