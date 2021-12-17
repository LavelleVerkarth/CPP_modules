#include "Cure.hpp"

Cure::Cure(void){
	type = "cure";
}

Cure::~Cure(void){
}

AMateria* Cure::clone() const{
	AMateria *clone = new Cure();
	return (clone);
}

void		Cure::use(ICharacter& target){
	std::cout <<"* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::Cure(const Cure &ic){
	*this = ic;
}

Cure& Cure::operator=(const Cure &ic){
	if (this == &ic)
	{
		type = ic.type;
	}
	return (*this);
}


