
#	ifndef MUTANTSTACK_HPP
#	define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <string>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack(void): std::stack<T>() {};
	MutantStack(MutantStack<T> const& other): std::stack<T>(other){};
	MutantStack(std::stack<T> const& other): std::stack<T>(other){};
	MutantStack<T>& operator=(MutantStack<T> const& other)
	{
		this->c = other.c;
		return (*this);
	};
	virtual ~MutantStack(void){};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};

#	endif