#include "Animal.hpp"

Animal::Animal(void){
	type = "Animal";
	std::cout << "A new " << type << " has appeared.\n";
}

Animal::Animal(const Animal &animal){
	*this = animal;
	std::cout  << type << " was copied!\n";
}

Animal::~Animal(void){
	std::cout << "And this " << type << " is gone!\n";
}

Animal&	Animal::operator=(const Animal &animal){
	if (this != &animal)
		type = animal.type;
	return(*this);
}

void		Animal::makeSound(void) const{
	std::cout << "Animals can make sounds!\n";
}
std::string	Animal::getType(void) const{
	return (type);
}
