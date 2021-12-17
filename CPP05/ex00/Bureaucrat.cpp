#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("Noname"){
	grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade):name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bu): name(Bu.name){
	*this = Bu;
}

Bureaucrat::~Bureaucrat(void){

}
const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low!");
}

std::string Bureaucrat::getName(void) const{
	return(name);
}

int			Bureaucrat::getGrade(void) const{
	return (grade);
}

void		Bureaucrat::incrementGrade(void){
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

void		Bureaucrat::decrementGrade(void){
	grade++;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &Bu){
	if (this != &Bu)
		grade = Bu.grade;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bur){
	os << Bur.getName() << ", bureaucrat grade " << Bur.getGrade() << ".";
	return (os);
}



