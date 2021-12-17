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

void Zombie::announce(void){
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ...\n";
}