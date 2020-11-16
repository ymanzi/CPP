
#	ifndef HUMAN_HPP
#	define HUMAN_HPP

#include "Brain.hpp"

class Human
{

protected:
	Brain _brain;

public:
	Human(void);
	~Human(void);
	Brain *identify(void);
	Brain &getBrain(void);


};


#	endif
