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
void do_sthing() {}

int main()
{
	int i = 0;
	try {
		if (i == 0)
			throw 1;
		else
			do_sthing();
	} catch(...) {
		throw 1;
		do_nothing();
	}

	try {

	} catch(...) {
		throw 1;
		do_nothing();
	}
}

