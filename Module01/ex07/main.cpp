/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:53:25 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/18 15:24:21 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>


int	show_error(std::string str, int ret)
{
	std::cout << str << std::endl;
	return (ret);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (show_error("please enter a valid number of arguments", 1));
	std::string fileWrite = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream fluxRead(fileWrite.c_str());
	if (!fluxRead)
		return (show_error("Error when opining the files", 2));
	fileWrite += ".replace";
	std::ofstream fluxWrite(fileWrite.c_str());
	if (!fluxWrite)
		return (show_error("Error when opining the files", 2));
	
		int sizeS1 = s1.size();
		std::string reading;
		bool same;
		int i = 0;
		char a;

		same = true;
		while (fluxRead.get(a))
		{
			i++;
			reading += a;
			std::string newString = s1;
			newString.resize(i);
			if (reading != newString)
			{
				fluxWrite << reading;
				reading.erase();
				i = 0;
			}
			else if (i == sizeS1)
			{
				fluxWrite << s2;
				reading.erase();
				i = 0;
			}
		}
	return (0);
}
