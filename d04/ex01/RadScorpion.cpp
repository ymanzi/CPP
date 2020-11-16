#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& other): Enemy(other)
{
}

RadScorpion& RadScorpion::operator=(RadScorpion const& other)
{
	if (this != &other)
		Enemy::operator=(other);
	return (*this);
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}
