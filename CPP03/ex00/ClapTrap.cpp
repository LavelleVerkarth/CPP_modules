#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	Name = "T1";
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "ClapTrap " << Name << " was created!\n";
}

ClapTrap::~ClapTrap(void){
	std::cout  << "ClapTrap " << Name << " was destroyed!\n";
}

ClapTrap::ClapTrap(std::string new_name){
	Name.append(new_name);
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout  << "ClapTrap " << Name << " was created!\n";
}

ClapTrap::ClapTrap(const ClapTrap &ct){
	*this = ct;
	std::cout  << "ClapTrap " << Name << " was copied!\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct){
	Name = ct.Name;
	Hitpoints = ct.Hitpoints;
	Energy_points = ct.Energy_points;
	Attack_damage = ct.Attack_damage;
	return(*this);
}


void ClapTrap::attack(std::string const &target){
	std::cout  << "ClapTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout  << "ClapTrap " << Name << " take damage " << amount << " points!\n";
	Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout  << "ClapTrap " << Name << " was repaired " << amount << " points!\n";
	Hitpoints += amount;
}
