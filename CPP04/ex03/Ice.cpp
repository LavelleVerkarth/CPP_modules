#include "Ice.hpp"

Ice::Ice(void){
	type = "ice";
}

Ice::~Ice(void){
}

AMateria* Ice::clone() const{
	AMateria *clone = new Ice();
	return (clone);
}

void		Ice::use(ICharacter& target){
	std::cout <<"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(const Ice &ic){
	*this = ic;
}

Ice& Ice::operator=(const Ice &ic){
	if (this == &ic)
	{
		type = ic.type;
	}
	return (*this);
}
