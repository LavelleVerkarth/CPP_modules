#include "Cat.hpp"

Cat::Cat(void){
	type = "Cat";
	Brain = new class Brain();
	std::cout << "And it's a " << type << "!\n";
}

Cat::Cat(const Cat &animal){
	Brain = new class Brain();
	*this = animal;
	std::cout  << type << " was copied!\n";
}

Cat::~Cat(void){
	std::cout << "The " << type << " thought.\n";
	delete Brain;
}

Cat&	Cat::operator=(const Cat &animal){
	if (this != &animal)
	{
		type = animal.type;
		*Brain = *animal.Brain;
	}
	return(*this);
}

void Cat::makeSound(void) const{
	std::cout << "The " << type << " makes a sound: " << "Meow Meeeooow!\n";
}

std::string	Cat::getType(void) const{
	return(type);
}

Brain  *Cat::getBrain() const
{
	return (Brain);
}
