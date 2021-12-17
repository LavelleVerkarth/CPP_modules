#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
 

	// int n = 10;
	// Animal *animal[n];
	// for(int i = 0; i < n; i ++)
	// {
	// 	if ((i % 2) == 0)
	// 		animal[i] = new Dog();
	// 	else 
	// 		animal[i] = new Cat();
	// }
	// for(int i = 0; i < n; i ++)
	// {
	// 		delete animal[i];
	// }


	// Dog Doge;
	// Dog copy_Doge(Doge);
	// Cat Kitty;
	// Cat copy_Kitty(Kitty);
	// std::cout << "<Doge's address>" << std::endl;
	// std::cout << Doge.getBrain() << std::endl;
	// std::cout << "<Copy Doge's address>" << std::endl;
	// std::cout << copy_Doge.getBrain() << std::endl << std::endl;
	// std::cout << "<Kitty's address>" << std::endl;
	// std::cout << Kitty.getBrain() << std::endl;
	// std::cout << "<Copy Kitty's address" << std::endl;
	// std::cout << copy_Kitty.getBrain() << std::endl<<std::endl;
}