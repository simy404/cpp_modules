#include "string"
#include <iostream>

class test {
	public:
		test() {std::cout << "test" << std::endl;}
};


int	main()
{
	int a = 1214;
	int c = 1214;
	if (a == c)
		return 1;
	test *b = new(std::nothrow) test ;
}
