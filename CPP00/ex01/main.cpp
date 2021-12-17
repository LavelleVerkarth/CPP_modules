#include "phonebook.hpp"

int main()
{
	std::string str;
	Phonebook book;
	int	i;

	i = 1;
	do
	{
		if (i)
			std::cout << "Enter one command from this list: \"ADD\", \"SEARCH\", \"EXIT\".\n";
		i = 1;
		std::cin >> str;
		if (!str.compare("ADD"))
		{
			book.add();
		}
		else if (!str.compare("SEARCH"))
		{
			book.search();
		}
		else if (str.compare("EXIT"))
			i = 0;
	} while (str.compare("EXIT"));
	
}