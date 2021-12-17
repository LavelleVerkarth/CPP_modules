#include "Character.hpp"
# include "AMateria.hpp"

Character::Character(std::string name){
	this->name = name;
	for(int i = 0; i < 4; i++)
		m[i] = NULL;
}

Character::~Character(){
	for(int i = 0; i < 4; i++)
	{
		if (this->m[i] != NULL)
		{
			delete m[i];
			m[i] = NULL;
		}
	}
}

std::string const & Character::getName() const{
	return (name);
}

void Character::equip(AMateria* m){
	for(int i = 0; i < 4; i++)
	{
		if (this->m[i] == NULL)
		{
			this->m[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx){
	if (idx >= 0 || idx < 4)
		m[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 || idx < 4)
		m[idx]->use(target);
}

Character::Character(const Character &Ch){
	*this = Ch;
}

Character &Character::operator=(const Character &Ch){
	if (this != &Ch)
	{
		name = Ch.name;
		for (int i = 0; i < 4; i++)
		{
			*m[i] = *Ch.m[i];
		}
	}
	return (*this);
}

