#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: virtual public Animal{
	private:

	public:
		Dog(void);
		Dog(const Dog &animal);
		~Dog(void);

		Dog&	operator=(const Dog &animal);
		void		makeSound(void) const;
		std::string	getType(void) const;
};


#endif