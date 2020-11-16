
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const& type): _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const& other)
{
	_hp = other._hp;
	_type = other._type;
}

Enemy& Enemy::operator=(Enemy const& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

Enemy::~Enemy()
{
}

std::string Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return (_hp);
}

void Enemy::takeDamage(int damage)
{
	if (_hp >= damage)
		_hp -= damage;
	else
		_hp = 0;
}