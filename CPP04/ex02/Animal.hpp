#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal &animal);
		virtual ~Animal(void);

		Animal&	operator=(const Animal &animal);
		virtual void		makeSound(void) const = 0;
		virtual std::string	getType(void) const = 0;
};


#endif