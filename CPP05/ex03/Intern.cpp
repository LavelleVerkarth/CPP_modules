#include "Intern.hpp"

Form* Intern::makeForm(const std::string nameForm, std::string target){
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i;
	Form *ret;

	i = 0;
	while (i < 3 && forms[i] != nameForm)
		i++;
	switch(i){
		case 0:
			return((ret = new ShrubberyCreationForm(target)));
		case 1:
			return((ret = new RobotomyRequestForm(target)));
		case 2:
			return((ret = new PresidentialPardonForm(target)));
		default:
			throw UnknownForm();
	}
}

const char*  Intern::UnknownForm::what()const throw(){
	return("unknow form");
}
