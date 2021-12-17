#include "Zombie.hpp"

Zombie::Zombie(std::string new_name){
	name = new_name;
	announce();
}

Zombie::Zombie(void){
}

Zombie::~Zombie(void){
	std::cout << "<" << name << "> destroyed\n";
}

void randomChump (std :: string name){
	Zombie new_zombie(name);
}

#include "Zombie.hpp"

void	Zombie::set_name(std::string new_name){
	name = new_name;
}

void Zombie::announce(void){
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ...\n";
}

Zombie*	newZombie(std::string name)
{
	Zombie *ret = new Zombie();
	ret->set_name(name);
	return (ret);
}