/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:51:37 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:51:38 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string &reference = str;
	std::string *ptr = &str;

	std::cout << "Pointeur : " << *ptr << std::endl;
	std::cout << "Reference : " << reference << std::endl;
}
