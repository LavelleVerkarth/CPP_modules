#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{

	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &ic);
		AMateria* clone() const;
		void		use(ICharacter& target);

		Ice& operator=(const Ice &ic);
};


#endif