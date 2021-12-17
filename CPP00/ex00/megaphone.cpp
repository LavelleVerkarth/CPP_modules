#include <iostream>


int main(int argc, char **argv)
{
	int i;
	std::string str;

	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 0;
		while(argv[++i])
		{
			str = std::string(argv[i]);
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;

		}
		std::cout<<"\n";
	}
}