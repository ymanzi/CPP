/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:18:01 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/23 09:18:02 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) {}
Convert::Convert(Convert const &) {}
Convert::~Convert(void) {}
Convert &Convert::operator=(Convert const &)
{
	return (*this);
}

//FUNCTIONS
int Convert::justZero(std::string str)
{
	std::string	str2;
	int			pos;

	str2 = std::to_string(std::stod(str));
	pos = str2.find(".");
	if (pos > 6)
		return (0);
	if (pos > 4)
		return (1);
	for (unsigned int i = pos + 1; i < str2.length(); i++)
	{
		if (str2[i] != '0')
			return (0);
	}
	return (1);
}

void 	Convert::precision(std::string str)
{
	double d = stod(str);

	if (!std::isinf(d) && !std::isnan(d) && this->justZero(str))
		std::cout << ".0";
}

int		Convert::notValid(std::string str)
{
	int	nbPoint;
	
	nbPoint = 0;
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			nbPoint++;
		if (nbPoint > 0 && !isdigit(str[i]))
			return (1);
	}
	if (nbPoint > 1)
		return (1);
	return (0);
}

void	Convert::procNum(std::string str)
{
	int		oneChar = 0;
	double	d;
	
	try
	{
		if (notValid(str))
		{
			std::cout << "The entry is not valid" << std::endl;
			return ;
		}
		if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
		{
			if (isdigit(str[1]))
			{
				std::string s;

				s += str[1];
				d = stod(s);
			}
			else
				d = static_cast<double>(str[1]);
			oneChar = 1;
		}
		else if (str.length() == 1)
		{
			if (isdigit(str[0]))
				d = stod(str);
			else
				d = static_cast<double>(str[0]);
			oneChar = 1;
		}
		else
			d = std::stod(str);
		try
		{
			std::cout << "char: " << this->toChar(d) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << '\n';
		}
		try
		{
			std::cout << "int: " << this->toInt(d) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << '\n';
		}
		try
		{
			std::cout << "float: " << this->toFloat(d);
			if (!oneChar)
				this->precision(str);
			else
				this->precision(std::to_string(d));
			std::cout << "f" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "f\n";
		}
		try
		{
			std::cout << "double: " << this->toDouble(d);
			if (!oneChar)
				this->precision(str);
			else
				this->precision(std::to_string(d));
			std::cout << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << '\n';
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << '\n';
	}
}

int Convert::toInt(double d)
{
	if (std::isnan(d))
		throw Convert::Impossible();
	else if (d < -2147483648)
		throw Convert::MInf();
	else if (d >= 2147483648)
		throw Convert::Inf();
	return (static_cast<int>(d));
}

double Convert::toDouble(double d)
{
	if (std::isnan(d))
		throw Convert::Nan();
	return (static_cast<double>(d));
}
float Convert::toFloat(double d)
{
	if (std::isnan(d))
		throw Convert::Nan();
	else if (d <= -std::numeric_limits<float>::infinity())
		throw Convert::MInf();
	else if (d >= std::numeric_limits<float>::infinity())
		throw Convert::Inf();
	return (static_cast<float>(d));
}

std::string Convert::toChar(double d)
{
	std::string	str;

	if (std::isnan(d) || std::isinf(d) || d < -127 || d > 127)
		throw Convert::Impossible();
	else if (!std::isprint(d))
		throw Convert::NotDisplay();
	str += '\'';
	str += static_cast<char>(d);
	str += '\'';
	return (str);
}

//EXCEPTIONS

typedef Convert::Impossible CN;

CN::Impossible(void) {}
CN::Impossible(Impossible const &other)
{
	(void)other;
}
CN &CN::operator=(Impossible const &other)
{
	(void)other;
	return (*this);
}
CN::~Impossible(void) throw()
{
}

const char *CN::what(void) const throw()
{
	return ("Impossible");
}

typedef Convert::NotDisplay ND;

ND::NotDisplay(void) {}
ND::NotDisplay(NotDisplay const &other)
{
	(void)other;
}
ND &ND::operator=(NotDisplay const &other)
{
	(void)other;
	return (*this);
}
ND::~NotDisplay(void) throw()
{
}

const char *ND::what(void) const throw()
{
	return ("Non displayable");
}

typedef Convert::Nan NN;

NN::Nan(void) {}
NN::Nan(Nan const &other)
{
	(void)other;
}
NN &NN::operator=(Nan const &other)
{
	(void)other;
	return (*this);
}
NN::~Nan(void) throw()
{
}

const char *NN::what(void) const throw()
{
	return ("nan");
}

typedef Convert::Inf II;

II::Inf(void) {}
II::Inf(Inf const &other)
{
	(void)other;
}
II &II::operator=(Inf const &other)
{
	(void)other;
	return (*this);
}
II::~Inf(void) throw()
{
}

const char *II::what(void) const throw()
{
	return ("inf");
}

typedef Convert::MInf MI;

MI::MInf(void) {}
MI::MInf(MInf const &other)
{
	(void)other;
}
MI &MI::operator=(MInf const &other)
{
	(void)other;
	return (*this);
}
MI::~MInf(void) throw()
{
}

const char *MI::what(void) const throw()
{
	return ("-inf");
}
