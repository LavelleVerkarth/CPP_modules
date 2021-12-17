#include "Character.hpp"
#include "AMateria.hpp"

AMateria::AMateria(void){
	type = "NonType";
}

AMateria::~AMateria(void){
}

AMateria::AMateria(std::string const &type){
	this->type = type;
}

std::string const	&AMateria::getType() const{
	return (type);
}

void	AMateria::use(ICharacter& target){
	(void)target;
}

AMateria::AMateria(const AMateria &Am){
	*this = Am;
}

AMateria& AMateria::operator=(const AMateria &Am){
	if (this != &Am)
	{
		this->type = Am.type;
	}
	return(*this);
}

