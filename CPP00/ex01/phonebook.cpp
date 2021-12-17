#include "phonebook.hpp"

Phonebook::Phonebook(void){
	count = 0;
}

Phonebook::~Phonebook(void){
}

void	Phonebook::add(void){
	if (count == 8)
		count = 0;
	cont[count].add(count);
	count++;
}

void	Phonebook::search(void){
	std::cout.width(10);
	std::cout << std::right << "index" << "|";
	std::cout.width(10);
	std::cout << std::right << "first name" << "|";
	std::cout.width(10);
	std::cout << std::right << "last name" << "|";
	std::cout.width(10);
	std::cout << std::right << "nickname" << "|\n";
	for(int i = 0; i < 8; i++)
		cont[i].search();
	if (cont[0].is_empty())
		select_contact();
	else
		std::cout << "List is empty!" << std::endl;
	
}

void	Phonebook::select_contact(void){
	int	ind;

	std::cout << "Select contact by index: ";
	std::cin >> ind;
	if (ind > 0 && ind < 9 && cont[ind - 1].is_empty())
		cont[ind - 1].print();
	else
	std::cout << "Wrong input!\n";
}

