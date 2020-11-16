#include <string>
#include <iostream>

struct Data
{
	std::string	s1;
	int			n;
	std::string s2;
};

void *serialize(void)
{
	Data *d = new Data; 
	std::string carac = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

	for (int i = 0; i < 8; i++)
		d->s1 += carac[std::rand() % carac.length()];
	d->n = std::rand();
	for (int i = 0; i < 8; i++)
		d->s2 += carac[std::rand() % carac.length()];
	return (d);
}

Data * deserialize(void * raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	std::srand(time(0));
	Data *d = deserialize(serialize());

	std::cout << "s1 :" << d->s1 << std::endl;
	std::cout << "n :" << d->n << std::endl;
	std::cout << "s2 :" << d->s2 << std::endl;

	delete d;

	return (0);
}
