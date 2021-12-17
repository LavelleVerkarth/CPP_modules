#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
	private:
		
	public:
		FragTrap(void);
		FragTrap(std::string new_name);
		FragTrap(const FragTrap &st);
		~FragTrap(void);

		void	highFivesGuys(void);

		FragTrap&	operator=(const FragTrap &st);
};


#endif