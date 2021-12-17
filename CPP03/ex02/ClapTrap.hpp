#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
	protected:
		std::string	Name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string new_name);
		ClapTrap(const ClapTrap &ct);
		~ClapTrap(void);
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap&	operator=(const ClapTrap &ct);
};


#endif