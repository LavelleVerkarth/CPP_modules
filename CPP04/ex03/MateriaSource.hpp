#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: virtual public IMateriaSource
{
	private:
		AMateria* m[4];
	public:
		MateriaSource(void);
		virtual ~MateriaSource(void);
		MateriaSource(const MateriaSource &ma);
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);

		MateriaSource &operator=(const MateriaSource &ma);
};

#endif