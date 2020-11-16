
#include "Human.hpp"

Human::Human(void)
{
	Brain brain;
	_brain = brain;
}

Human::~Human(void)
{
}

Brain *Human::identify(void)
{
	return (_brain.identify());
}

Brain &Human::getBrain(void)
{
	return (_brain);
}
