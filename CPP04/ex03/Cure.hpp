#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{

	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure &ic);
		AMateria* clone() const;
		void		use(ICharacter& target);

		Cure& operator=(const Cure &ic);
};


#endif