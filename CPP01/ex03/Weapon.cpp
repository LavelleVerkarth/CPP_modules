#include "Weapon.hpp"

Weapon::Weapon(std::string const &new_weapon){
	setType(new_weapon);
}


Weapon::Weapon(void){
}

Weapon::~Weapon(void){
}

const std::string	&Weapon::getType(void){
	return (weapon);
}

void	Weapon::setType(const std::string&new_weapon){
	weapon = new_weapon;
}

