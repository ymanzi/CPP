/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:25:13 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/23 09:25:15 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GENERATE_HPP
#	define GENERATE_HPP

#include <string>
#include <iostream>

class Base
{
	public:
		virtual ~Base(void){};
};

class A : public Base
{
public:
	virtual ~A(void){};
};

class B : public Base
{
public:
	virtual ~B(void){};
};

class C : public Base
{
public:
	virtual ~C(void){};
};

Base	*generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#	endif
