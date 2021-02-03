/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:51:52 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:51:53 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef BRAIN_HPP
#	define BRAIN_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Brain
{
private:
	int _perimetre;
	int _masse;
	int _vitesse;

public:
	Brain(void);
	~Brain(void);
	Brain	*identify(void);
	void	show(void) const;
};

#	endif
