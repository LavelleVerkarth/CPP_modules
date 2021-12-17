#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	private:
		std::string Name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string new_name);
		DiamondTrap(const DiamondTrap &st);
		~DiamondTrap(void);

		void	attack(std::string const &target);
		void	whoAmI(void);

		DiamondTrap&	operator=(const DiamondTrap &st);
};


#endif
