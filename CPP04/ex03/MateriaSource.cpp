#include "Ice.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++)
		m[i] = NULL;
}

MateriaSource::~MateriaSource(void){
	for(int i = 0; i < 4; i++)
	{
		if (this->m[i] != NULL)
		{
			delete m[i];
			m[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if (this->m[i] == NULL)
		{
			this->m[i] = m;
			break;
		}
	}	
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (m[i]->getType() == type)
			return (m[i]->clone());
	}
	return (NULL);
}

MateriaSource::MateriaSource(const MateriaSource &ma){
	*this = ma;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ma){
	if (this != &ma)
	{
		for (int i = 0; i < 4; i++)
		{
			*m[i] = *ma.m[i];
		}
	}
	return (*this);
}

