#include "string"
#include <iostream>
#include <exception>

class test {
	private:
		virtual void hi() {}
	public:
		test() {std::cout << "test" << std::endl;}
};

void do_nothing() {}
void do_sthing() throw() {
	try {
		throw std::exception();
	} catch (...) {
		std::cout << "hi" << std::endl ;
	}
}

int main()
{
	int i = 0;
	try {
		do_sthing();
	} catch(...) {
		do_nothing();
	}

	try {

	} catch(...) {
		throw 1;
		do_nothing();
	}
}

