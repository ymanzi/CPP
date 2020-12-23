#	ifndef ARRAY_HPP
#	define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <csignal>

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_n;

	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(Array const& other);

		Array<T>&		operator=(Array const& other);
		T&				operator[](int & i) const;
		const T&		operator[](const int & i) const;
		unsigned int	size(void) const;
};

template<typename T>
Array<T>::Array(void): _arr(nullptr), _n(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _n(n)
{
}

template<typename T>
Array<T>::Array(Array<T> const& other)
{
	if (this->_arr)
		delete[] this->_arr;
	this->_arr = new T[other.size()];
	for (unsigned int i = 0; i < other._n; i++)
		this->_arr[i] = other._arr[i];
	_n = other._n;
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_arr)
		delete[] _arr;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& other)
{
	if (this != &other)
	{
		if (_arr)
			delete[] _arr;
		_arr = new T[other._n];
		for (unsigned int i = 0; i < other._n; i++)
			_arr[i] = other._arr[i];
		_n = other._n;
	}
	return (*this);
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (_n);
}


template<typename T>
T& Array<T>::operator[](int & i) const
{
	try
	{
		if (i < 0 || static_cast<unsigned int>(i) >= _n)
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		raise(SIGSEGV);
	}
	return (_arr[i]);
}

template<typename T>
const T& Array<T>::operator[](int const & i) const
{
	try
	{
		if (i < 0 || static_cast<unsigned int>(i) >= _n)
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		raise(SIGSEGV);
	}
	return (_arr[i]);
}

#endif