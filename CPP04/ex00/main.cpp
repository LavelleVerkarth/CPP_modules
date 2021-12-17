#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	std::cout << "------------------\n";
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	wi->makeSound();
	w_meta->makeSound();
	std::cout << wi->getType() << " " << std::endl;
	delete wi;
	delete w_meta;
}