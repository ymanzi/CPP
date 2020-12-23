/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:18:43 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/23 09:18:44 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generate.hpp"

int main(void)
{
	Base *p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	delete p;
	return (0);
}
