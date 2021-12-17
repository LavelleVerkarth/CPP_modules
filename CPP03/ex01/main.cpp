#include "ScavTrap.hpp"

int main()
{
	// ClapTrap	t1;
	// ClapTrap	t2("T2");
	ScavTrap	p1;
	ScavTrap	p2(".P2");

	// t2.attack("T1");
	// t1.takeDamage(0);
	// t1.beRepaired(1);
	p2.attack("T1.P1");
	p1.takeDamage(20);
	p1.guardGate();
	p1.beRepaired(10);
}