#include "string"
#include <iostream>
#include <exception>

class test {
	private:
		int bin;
		virtual void hi() {}
		int ini_bin() { throw 1; return 1;}
	public:
		test() : bin(ini_bin()){std::cout << "test" << std::endl;}
};

void do_nothing() {}
// void do_sthing() throw() {
// 	try {
// 		throw std::exception();
// 	} catch (...) {
// 		std::cout << "hi" << std::endl ;
// 	}
// }

int main()
{
	int i = 0;
	try {
		test t1;
	} catch (...)
	{
		do_nothing();
		std::cout << "haha" << std::endl;
	}
}
