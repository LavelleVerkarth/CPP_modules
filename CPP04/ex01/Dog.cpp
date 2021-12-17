#include "Dog.hpp"

Dog::Dog(void){
	type = "Dog";
	Brain = new class Brain();
	std::cout << "And it's a " << type << "!\n";
}

Dog::Dog(const Dog &animal){
	Brain = new class Brain();
	*this = animal;
	std::cout  << type << " was copied!\n";
}

Dog::~Dog(void){
	std::cout << "The " << type << " thought.\n";
	delete Brain;
}

Dog&	Dog::operator=(const Dog &animal){
	if (this != &animal)
	{
		type = animal.type;
		*Brain = *animal.Brain;
	}
	return(*this);
}

void	Dog::makeSound(void) const{
	std::cout << "The " << type << " makes a sound: " << "Woof Woof!\n";
}

std::string	Dog::getType(void) const{
	return(type);
}

Brain  *Dog::getBrain() const
{
	return (Brain);
}
