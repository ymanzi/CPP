#	ifndef ENEMY_HPP
#	define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	private:
		int			_hp;
		std::string	_type;

	public:
		Enemy(int hp, std::string const& type);
		Enemy(Enemy const& other);
		Enemy& operator=(Enemy const& other);
		virtual ~Enemy(void);
		
		std::string getType(void) const;
		int getHP(void) const;
		virtual void takeDamage(int damage);
};


#	endif