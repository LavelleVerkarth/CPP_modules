#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
	protected:
		std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &Wronganimal);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal &Wronganimal);
		void		makeSound(void) const;
		virtual std::string	getType(void) const;
};


#endif