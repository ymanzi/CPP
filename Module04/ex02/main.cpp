/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:02 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:03 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	{
		std::cout << "----------------- Given Tests --------------" << std::endl;
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	{
		std::cout << std::endl <<"----------------- My Tests( CopyConstructor SQUAD) --------------" << std::endl;
		
		 ISpaceMarine* bob = new TacticalMarine;
		 ISpaceMarine* jim = new AssaultTerminator;
		 Squad vlc;
		 vlc.push(bob);
		 vlc.push(jim);

		std::cout << "----------------- Copy Constructor --------------" << std::endl;
		Squad vlc1(vlc);                          //CONSTRUCTOR COPY
		
		for (int i = 0; i < vlc1.getCount(); ++i)
		{
			if (i == 0 || i == 1)
				std::cout << "---- TacticalMarine -------- " << std::endl;
			else
				std::cout << "---- AssaultTerminator -------- " << std::endl;
			ISpaceMarine* cur = vlc1.getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		std::cout << std::endl <<"----------------- My Tests(AssignationOperator SQUAD) --------------" << std::endl;
		Squad vlc2;
		std::cout << "-------------- Assignation Operator --------------" << std::endl;
		vlc2 = vlc;                     //ASSIGNATION OPERATOR
		
		for (int i = 0; i < vlc2.getCount(); ++i)
		{
			if (i == 0 || i == 1)
				std::cout << "---- TacticalMarine -------- " << std::endl;
			else
				std::cout << "---- AssaultTerminator -------- " << std::endl;
			ISpaceMarine* cur = vlc2.getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		std::cout << std::endl <<"----------------- My Tests(Destruction) --------------" << std::endl;
	}
	return 0;
}
