#	ifndef PONY_HPP
#	define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
	public:
	Pony();
	Pony(std::string name, int age, int taille, std::string sexe);
	~Pony();
	void	presentation(void);
	void	setAge(int age);
	void	setName(std::string name);
	void	setTaille(int taille);
	void	setSexe(std::string sexe);
	

	protected:
	std::string	_name;
	int		_age;
	int		_taille;
	std::string	_sexe;
};

void	ponyOnTheStack();
void	ponyOnTheHeap();

#	endif
