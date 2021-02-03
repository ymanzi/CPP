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

void test(std::string str, Base *p)
{
	std::cout << "~~~~ " << str << " ~~~~~" << std::endl;
	identify_from_pointer(p);
	identify_from_reference(*p);
	std::cout << std::endl;
	delete p;
}


int main(void)
{
	std::cout << "~~~~ RANDOM ~~~~~" << std::endl;
	Base *p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	delete p;

	std::cout << std::endl;
	test("A", new A);
	test("B", new B);
	test("C", new C);
	return (0);
}
