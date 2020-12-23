#include "Array.hpp"

#define affiche(x) std::cout << x << std::endl;

template<typename T>
void show(Array<T> &arr, int size)
{
  if (size == 0)
  {
    std::cout << "empty array" << std::endl;
    return ;
  }
  for (int i = 0; i < size; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}

template<typename T, typename T2>
void write(Array<T> &obj, T2 const &array, int size)
{
  for (int i = 0; i < size; i++)
    obj[i] = array[i];
}


int main(void)
{
	{
	affiche("-----------------ARRAY INT---------------");
	Array<int> i;
	Array<int> i1(5);

	int a_i[5] = {1, 2, 3, 4, 5};
	std::cout << "size = ";
	affiche(i.size());
	show(i, i.size());
	std::cout << "size = ";
	affiche(i1.size());
	write(i1, a_i, i1.size());
	show(i1, i1.size());

	i = i1;
	show(i, i.size());
	}
	{
	affiche("-----------------ARRAY FLOAT---------------");
	Array<float> i;
	Array<float> i1(5);

	float a_i[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
	std::cout << "size = ";
	affiche(i.size());
	show(i, i.size());
	std::cout << "size = ";
	affiche(i1.size());
	write(i1, a_i, i1.size());
	show(i1, i1.size());

	i = i1;
	show(i, i.size());
	}
	{
	affiche("-----------------ARRAY CHAR---------------");
	Array<char> i;
	Array<char> i1(5);

	std::string a_i = "Hello!";
	std::cout << "size = ";
	affiche(i.size());
	show(i, i.size());
	std::cout << "size = ";
	affiche(i1.size());
	write(i1, a_i, i1.size());
	show(i1, i1.size());

	i = i1;
	show(i, i.size());
	}
	{
	affiche("-----------------ARRAY STRING---------------");
	Array<std::string> i;
	Array<std::string> i1(3);

	std::string a_i[3] = {"Hello", "World", "!"};
	std::cout << "size = ";
	affiche(i.size());
	show(i, i.size());
	std::cout << "size = ";
	affiche(i1.size());
	write(i1, a_i, i1.size());
	show(i1, i1.size());

	i = i1;
	show(i, i.size());
	}
	return (0);
}