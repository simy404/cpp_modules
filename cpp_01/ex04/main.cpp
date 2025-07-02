#include <iostream>
#include <fstream>
#include <string>

std::string	replace_input(const std::string &input, const std::string& from, const std::string& to)
{
	if (from.empty()) {
		return input;
	}

	std::string	output;
	std::size_t	old_pos = 0, new_pos = 0;

	while (true) {
		new_pos = input.find(from, old_pos);

		output.append(
			input,
			old_pos,
			new_pos != std::string::npos ? new_pos - old_pos : new_pos
		);
		if (new_pos == std::string::npos)
			break;
		output.append(to);
		old_pos = new_pos + from.length();
	}
	return output;
}

int	s_old_new_g(const std::string& filename, const std::string& from, const std::string& to)
{
	std::ifstream in_stream(filename.c_str());
	if(!in_stream.is_open()) {
		std::cout << "invalid file or filename" << std::endl;
		return 1;
	}

	std::ofstream out_stream((filename + ".replace").c_str());
	if (!out_stream.is_open()) {
		std::cout << "cannot open <filename>.replace" << std::endl;
		in_stream.close();
		return 1;
	}

	std::string	input;
	char c;
	while (in_stream.get(c)) {
   		input += c;
	}
	out_stream << replace_input(input, from, to);

	in_stream.close();
	out_stream.close();
	return 0;
}


int main(int argc, char**argv)
{
	if (argc != 4) {
		std::cout << "invalid argument count" << std::endl;
		return 1;
	}
	else {
		return s_old_new_g(argv[1], argv[2], argv[3]);
	}
}
