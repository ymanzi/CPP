#include "mutantstack.hpp"
#include <list>

int main()
{
	{	
		std::cout << "------------------------- MAIN ----------------" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top = " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size = " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "------------------------- LIST ----------------" << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "top = " << mstack.back() << std::endl; // impossible to return the last elem
		mstack.pop_back();
		std::cout << "size = " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
return 0;
}



