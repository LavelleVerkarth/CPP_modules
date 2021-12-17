#include "Brain.hpp"
#include <algorithm>
#include <iterator>

Brain::Brain(void){
	std::cout << "A new brain!\n";
}

Brain::Brain(const Brain &Brain){
	*this = Brain;
	std::cout  << "Brain was copied!\n";
}

Brain::~Brain(void){
	std::cout << "Brain destroyed!\n";
}

Brain&	Brain::operator=(const Brain &new_Brain){
	if (this == &new_Brain)
		return(*this);
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = new_Brain.ideas[i];
	}
	return(*this);
}
