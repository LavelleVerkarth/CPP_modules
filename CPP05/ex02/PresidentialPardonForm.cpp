#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("NotTarget_Presidential", 25, 5, "NotTarget"){
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form(target + "_Presidential", 25, 5, target){

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &Fo): Form(Fo.getName(),  Fo.getGradeExecute(), Fo.getGradeSign(), Fo.getTarget())
{
	*this = Fo;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &Fo){
	if (this != &Fo)
	{
		Form::operator=(Fo);
	}
	return (*this);
}

void	PresidentialPardonForm::executedAll(void) const{
	std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}


