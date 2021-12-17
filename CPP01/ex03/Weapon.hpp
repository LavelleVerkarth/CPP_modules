#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon{
	private:
		std::string weapon;
	public:
		Weapon(void);
		Weapon(std::string const &new_weapon);
		~Weapon(void);
		const std::string	&getType(void);
		void				setType(const std::string &new_weapon);
};

#endif