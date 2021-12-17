#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	Name.append(".F1");
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << Name << " was created!\n";
}

FragTrap::~FragTrap(void){
	std::cout  << "FragTrap " << Name << " was destroyed!\n";
}

FragTrap::FragTrap(std::string new_name){
	Name.append(new_name);
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout  << "FragTrap " << Name << " was created!\n";
}

FragTrap::FragTrap(const FragTrap &st){
	*this = st;
	std::cout  << "FragTrap " << Name << " was copied!\n";
}

FragTrap& FragTrap::operator=(const FragTrap &st){
	Name = st.Name;
	Hitpoints = st.Hitpoints;
	Energy_points = st.Energy_points;
	Attack_damage = st.Attack_damage;
	return(*this);
}

void	FragTrap::highFivesGuys(void){
	std::cout << Name << ": \"High fives guys!\"\n";
}