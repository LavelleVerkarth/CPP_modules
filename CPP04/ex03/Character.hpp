#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria* m[4];
	public:
		Character(void){};
		Character(std::string name);
		Character(const Character &Ch);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		
		Character &operator=(const Character &Ch);
};

#endif