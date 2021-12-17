#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon){
	name = new_name;
	weapon = &new_weapon;
}


HumanA::HumanA(void){
}

HumanA::~HumanA(void){
}

void HumanA::attack(){
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

