#include "ClapTrap.hpp"

int main()
{
	ClapTrap	t1;
	ClapTrap	t2("T2");

	t2.attack("T1");
	t1.takeDamage(0);
	t1.beRepaired(1);
}