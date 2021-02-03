/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:18:15 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/23 09:18:16 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{ 
	if (argc == 2)
	{
		Convert c;
		c.procNum(argv[1]);
	}
	else
		std::cout << "This program just take one parameter" << std::endl;
	return (0);
}
