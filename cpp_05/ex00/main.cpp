#include <iostream>
#include <string>

class	test {
	int a,bc;
	public:
		 void hi() {std::cout << "hi " << std::endl;}
		 test &ope 	rator=(test &_test) {
			std::cout << "test " << std::endl;
			return *this;};
};

int	main()
{
	test *_test = new test;
	// test->operator=(test);
	*_test = *_test;
}
