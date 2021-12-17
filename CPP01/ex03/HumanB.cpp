#include "HumanB.hpp"

HumanB::HumanB(std::string new_name){
	name = new_name;
	weapon = NULL;
}

HumanB::HumanB(void){
}

HumanB::~HumanB(void){
}

void HumanB::attack(){
	if (weapon != NULL)
		std::cout << name << " attacks with his hand\n";
	else
		std::cout << name << " 	 " << "" << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon){
	weapon = &new_weapon;
}