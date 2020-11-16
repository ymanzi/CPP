#	ifndef ARRAY_HPP
#	define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
public:
	Array(void);
	Array(unsigned int n);
	~Array(void);
	Array(Array const& other);

	Array<T>&		operator=(Array const& other);
	T&				operator[](unsigned int & i);
	unsigned int	size(void) const;
private:
	T				*_arr;
	unsigned int	_n;
};

template<typename T>
Array<T>::Array(void): _arr(0), _n(0)
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
	for (int i = 0; i < other._n; i++)
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
		for (unsigned int i = 0; i < other.size(); i++)
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
T& Array<T>::operator[](unsigned int & i)
{
	if (i < 0 || i >= _n)
		throw std::exception();
	return (_arr[i]);
}

#endif