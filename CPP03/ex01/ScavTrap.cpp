#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	Name.append(".P1");
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap " << Name << " was created!\n";
}

ScavTrap::~ScavTrap(void){
	std::cout  << "ScavTrap " << Name << " was destroyed!\n";
}

ScavTrap::ScavTrap(std::string new_name){
	Name.append(new_name);
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout  << "ScavTrap " << Name << " was created!\n";
}

ScavTrap::ScavTrap(const ScavTrap &st){
	*this = st;
	std::cout  << "ScavTrap " << Name << " was copied!\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &st){
	Name = st.Name;
	Hitpoints = st.Hitpoints;
	Energy_points = st.Energy_points;
	Attack_damage = st.Attack_damage;
	return(*this);
}

void ScavTrap::attack(std::string const &target){
	std::cout  << "ScavTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!\n";
}

void	ScavTrap::guardGate(void){
	std::cout  << "ScavTrap " << Name << " have enterred in Gate keeper mode!\n";
}

