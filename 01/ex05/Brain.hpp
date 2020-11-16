
#	ifndef BRAIN_HPP
#	define BRAIN_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Brain
{
protected:
	int _perimetre;
	int _masse;
	int _vitesse;

public:
	Brain(void);
	~Brain(void);
	Brain *identify(void);
};



#	endif
