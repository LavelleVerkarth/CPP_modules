#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("NotTarget_Robot", 75, 42, "NotTarget"){
	
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form(target + "_Robot", 75, 42, target){

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &Fo): Form(Fo.getName(),  Fo.getGradeExecute(), Fo.getGradeSign(), Fo.getTarget())
{
	*this = Fo;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &Fo){
	if (this != &Fo)
	{
		Form::operator=(Fo);
	}
	return (*this);
}

const char* RobotomyRequestForm::NotSuccess::what() const throw(){
	return ("unsuccessful robotization!");
}

void	RobotomyRequestForm::executedAll(void) const{
	std::cout << "BZZZzz....WBZzzzz\n";
	srand(time(NULL));
	if ((rand()) % 2 != 0)
	{
		std::cout << target << " has been robotomized successfully!\n";
	}
	else
		throw NotSuccess();
}


