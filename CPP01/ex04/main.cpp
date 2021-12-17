#include <iostream>
#include <fstream>
#include <string>

void	ft_replace(std::string *text, std::string s1, std::string s2){
	std::size_t found;

	if(s1 == s2)
		return ;
	found = (*text).rfind(s1);
	while (found!=std::string::npos){
		(*text).erase(found, s1.length());
		(*text).insert(found, s2);
		found = (*text).rfind(s1);
	}
}

int main(int argc, char **argv)
{
	if (argc != 4 || argv[1][0] == 0 || argv[2][0] == 0){
		std::cout << "Bad arguments!\n";
		return (1);
	}
	std::string text = argv[1];
	std::ifstream infile(text);
	if (!infile.is_open()){
		std::cout << "Error: file " << text << std::endl;
		return (1);
	}
	text = text.append(".replace");
	std::ofstream outfile(text);
	while (std::getline (infile, text)){
		ft_replace(&text, argv[2], argv[3]);
		outfile << text;
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
}