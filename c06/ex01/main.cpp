#include <string>
#include <iostream>

struct Data
{
	std::string	s1;
	int			n;
	std::string s2;
};

std::string	get_random_string(int n)
{
	std::string carac = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	std::string	str;

	for (int i = 0; i < n; i++)
		str += carac[std::rand() % carac.length()];
	return (str);
}


void *serialize(void)
{
	Data	*d;
	
	d = new Data;
	std::string carac = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

	/*for (int i = 0; i < 7; i++)
	{
		d->s1 += carac[std::rand() % carac.length()];
		d->s2 += carac[std::rand() % carac.length()];
	}*/
	d->n = std::rand();
	d->s1 += get_random_string(8);
	d->s2 += get_random_string(8);
	return (d);
}

Data* deserialize(void* raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	std::srand(time(0));

	Data *arr = reinterpret_cast<Data*>(serialize());
	Data *d = deserialize(serialize());

	std::cout << "SIzeOf: " << sizeof(*arr) << std::endl;
	std::cout << "s1 :" << d->s1 << std::endl;
	std::cout << "n :" << d->n << std::endl;
	std::cout << "s2 :" << d->s2 << std::endl;

	delete d;
	delete arr;
	
	return (0);
}
