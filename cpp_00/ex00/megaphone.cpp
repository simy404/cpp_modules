#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}

	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++) {
			std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::endl(std::cout);
}
