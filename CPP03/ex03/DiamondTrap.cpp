#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)  {
	Name = "D1";
	ClapTrap::Name = Name + "_clap_name";
	// ClapTrap::Name = "D1_" + ClapTrap::Name;
	Hitpoints = FragTrap::Hitpoints;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap " << Name << " was created!\n";
	std::cout << "!!!!" << Energy_points << " - " << Attack_damage <<std::endl;
}

DiamondTrap::~DiamondTrap(void){
	std::cout  << "DiamondTrap " << Name << " was destroyed!\n";
}

DiamondTrap::DiamondTrap(std::string new_name){
	Name = new_name;
	ClapTrap::Name = Name + "_clap_name";
	// ClapTrap::Name = new_name + "_" + ClapTrap::Name;
	Hitpoints = FragTrap::Hitpoints;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap " << Name << " was created!\n";
	
}

DiamondTrap::DiamondTrap(const DiamondTrap &st){
	*this = st;
	std::cout  << "DiamondTrap " << Name << " was copied!\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &st){
	Name = st.Name;
	ClapTrap::Name = st.ClapTrap::Name;
	Hitpoints = st.Hitpoints;
	Energy_points = st.Energy_points;
	Attack_damage = st.Attack_damage;
	return(*this);
}

void DiamondTrap::attack(std::string const &target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void){
	std::cout  << "My name is " << Name << ", my ClapTrap name is " << ClapTrap::Name << std::endl;
}

