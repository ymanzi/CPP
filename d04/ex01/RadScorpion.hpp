#	ifndef RADSCORPION_HPP
#	define RADSCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const& other);
	RadScorpion& operator=(RadScorpion const& other);
	virtual ~RadScorpion(void);
};


#	endif