#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	private:
		
	public:
		ScavTrap(void);
		ScavTrap(std::string new_name);
		ScavTrap(const ScavTrap &st);
		~ScavTrap(void);

		void	attack(std::string const &target);
		void	guardGate(void);

		ScavTrap&	operator=(const ScavTrap &st);
};


#endif