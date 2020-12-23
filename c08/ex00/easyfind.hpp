
#	ifndef EASYFIND_HPP
#	define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template<typename T>
int &easyfind(T& tab, int n)
{
	typename T::iterator it;
	if (tab.empty())
		throw std::exception();
	it = std::find(tab.begin(), tab.end(), n);
	if (it == tab.end())
		throw std::exception();
	return (*it);
}


#	endif