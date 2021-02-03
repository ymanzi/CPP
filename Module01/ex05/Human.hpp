/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:52:07 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:52:08 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMAN_HPP
#	define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	Brain	_brain;

public:
	Human(void);
	~Human(void);
	Brain *identify(void);
	Brain &getBrain(void);
};

#	endif
