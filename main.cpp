#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main(void)
{
	ostream_iterator<vector<string>> it(cout, " ");
	*it = "Hello"
	*it = "world!"

	return (0);

}
