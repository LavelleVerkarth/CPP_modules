#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	type = "WrongAnimal";
	std::cout << "A new " << type << " has appeared.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &Wronganimal){
	*this = Wronganimal;
	std::cout  << type << " was copied!\n";
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "And this " << type << " is gone!\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &Wronganimal){
	if (this != &Wronganimal)
		type = Wronganimal.type;
	return(*this);
}

void		WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimals cannot make sounds!\n";
}
std::string	WrongAnimal::getType(void) const{
	return (type);
}
