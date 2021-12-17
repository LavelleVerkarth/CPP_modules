#include "Zombie.hpp"

void	Zombie::set_name(std::string new_name){
	name = new_name;
}


Zombie*	newZombie(std::string name)
{
	Zombie *ret = new Zombie();
	ret->set_name(name);
	return (ret);
}