#	ifndef CONVERT_HPP
#	define CONVERT_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>

class Convert
{
public:
	Convert(void);
	Convert(Convert const&);
	~Convert(void);
	Convert& operator=(Convert const&);

//FUNCTIONS
	int		justZero(std::string str);
	int		notValid(std::string str);
	void	procNum(std::string str);
	void	precision(std::string str);
	int		toInt(double d);
	double	toDouble(double d);
	float	toFloat(double d);
	std::string	toChar(double d);

//EXCEPTIONS
	class Impossible: public std::exception
	{
		public:
			Impossible(void);
			Impossible(Impossible const& other);
			Impossible& operator=(Impossible const& other);
			virtual const char *what(void) const throw();
			virtual ~Impossible(void) throw();	
	};

	class NotDisplay: public std::exception
	{
		public:
			NotDisplay(void);
			NotDisplay(NotDisplay const& other);
			NotDisplay& operator=(NotDisplay const& other);
			virtual const char *what(void) const throw();
			virtual ~NotDisplay(void) throw();
	};

	class Nan: public std::exception
	{
		public:
			Nan(void);
			Nan(Nan const& other);
			Nan& operator=(Nan const& other);
			virtual const char *what(void) const throw();
			virtual ~Nan(void) throw();
	};

	class Inf: public std::exception
	{
		public:
			Inf(void);
			Inf(Inf const& other);
			Inf& operator=(Inf const& other);
			virtual const char *what(void) const throw();
			virtual ~Inf(void) throw();
	};

	class MInf: public std::exception
	{
		public:
			MInf(void);
			MInf(MInf const& other);
			MInf& operator=(MInf const& other);
			virtual const char *what(void) const throw();
			virtual ~MInf(void) throw();
	};
};

#	endif