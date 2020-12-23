/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:10:18 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:10:19 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CHARACTER_HPP
#	define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_materia[4];

	public:
		Character(std::string name = "SpongeBob");
		Character(Character const& other);
		Character& operator=(Character const& other);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#	endif
