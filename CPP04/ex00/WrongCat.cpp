#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	type = "WrongCat";
	std::cout << "And it's a " << type << "!\n";
}

WrongCat::WrongCat(const WrongCat &animal){
	*this = animal;
	std::cout  << type << " was copied!\n";
}

WrongCat::~WrongCat(void){
	std::cout << "The " << type << " thought.\n";
}

WrongCat&	WrongCat::operator=(const WrongCat &animal){
	if (this != &animal)
		type = animal.type;
	return(*this);
}

void WrongCat::makeSound(void) const{
	std::cout << "The " << type << " makes a sound: " << "Meow Meeeooow!\n";
}

std::string	WrongCat::getType(void) const{
	return(type);
}

