#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"


class HumanB{
	private:
		Weapon *weapon;
		std::string name;

	public:
		HumanB(void);
		HumanB(std::string new_name);
		~HumanB(void);
		void	attack();
		void	setWeapon(Weapon &new_weapon);
};

#endif