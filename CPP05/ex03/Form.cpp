#include "Form.hpp"

Form::Form(void): name("NoName"),  grade_execute(150), grade_sign(150), target("NotTarget"){
	sign = false;
}

Form::Form(const std::string name, const int sign, const int execute, const std::string target): name(name),  grade_execute(sign), grade_sign(execute) , target(target){
	this->sign = false;
	if (grade_execute < 1 || grade_sign < 1)
		throw GradeTooHighException();
	else if (grade_execute > 150 || grade_sign > 150)
		throw GradeTooLowException();
}

Form::Form(Form &Fo): name(Fo.getName()),  grade_execute(Fo.getGradeExecute()), grade_sign(Fo.getGradeSign()), target(Fo.getTarget()){
	*this = Fo;
}

Form::~Form(void){

}

std::string	Form::getName(void) const{
	return (name);
}
bool		Form::getSign(void) const{
	return (sign);
}
int			Form::getGradeSign(void) const{
	return (grade_sign);
}
int			Form::getGradeExecute(void) const{
	return (grade_execute);
}

Form& Form::operator=(Form &Fo){
	if (this != &Fo)
		sign = Fo.sign;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& Bu){
	os << "Form name: " << Bu.getName() << ", grade signed: " << Bu.getGradeSign() << ", grade execute: " << Bu.getGradeExecute() << ", signed: " << Bu.getSign() << ".";
	return (os);
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade too high!");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade too low!");
}

const char* Form::FormAlredysigned::what() const throw(){
	return ("Form already signed!");
}


void Form::beSigned(const Bureaucrat& Bu){
	if (sign != 1)
	{
		if (grade_sign >= Bu.getGrade())
			sign = true;
		else
			throw GradeTooLowException();
	}
	else
		throw FormAlredysigned();
}

const char* Form::FormNotSigned::what() const throw(){
	return ("The form has not been signed yet!");
}

void Form::execute(Bureaucrat const & executor) const{
	if (sign == 1)
	{
		if (grade_execute >= executor.getGrade())
		{
			executedAll();
		}
		else
			throw GradeTooLowException();
	}
	else
		throw FormNotSigned();

}

std::string	Form::getTarget(void){
	return (target);
}