#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
		std::string	name;

	public:
		Zombie(std::string new_name);
		Zombie(void);
		~Zombie(void);
		void	set_name(std::string new_name);
		void	announce(void);

};

Zombie*	newZombie(std::string name);
void	randomChump (std :: string name);

#endif