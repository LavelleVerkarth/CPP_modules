#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal{
	private:

	public:
		WrongCat(void);
		WrongCat(const WrongCat &animal);
		~WrongCat(void);

		WrongCat&	operator=(const WrongCat &animal);
		// void		makeSound(void) const;
		std::string	getType(void) const;
};


#endif