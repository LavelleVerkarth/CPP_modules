#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat: virtual public Animal{
	private:
		Brain *Brain;

	public:
		Cat(void);
		Cat(const Cat &animal);
		~Cat(void);

		Cat&		operator=(const Cat &animal);
		void		makeSound(void) const;
		std::string	getType(void) const;
    	class Brain		*getBrain() const;
};


#endif