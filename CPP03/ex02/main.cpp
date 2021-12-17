#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap	t1;
	// ClapTrap	t2("T2");
	// ScavTrap	p1;
	// ScavTrap	p2(".P2");
	FragTrap	f1;
	FragTrap	f2(".F2");

	// t2.attack("T1");
	// t1.takeDamage(0);
	// t1.beRepaired(1);
	// p2.attack("T1.P1");
	// p1.takeDamage(20);
	// p1.guardGate();
	// p1.beRepaired(10);
	f2.attack("T1.P1");
	f1.takeDamage(30);
	f1.highFivesGuys();
	f1.beRepaired(15);
}