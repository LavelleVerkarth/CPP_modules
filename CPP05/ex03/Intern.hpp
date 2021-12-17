#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern{
	private:

	public:
		Intern(void) {};
		Intern(Intern *) {};
		~Intern(void) {};
		Form* makeForm(const std::string nameForm, std::string target);

		Intern &operator=(Intern &In) {(void)In; return *this;};

		class UnknownForm: public std::exception{
			public:
				const char* what() const throw();
		};
};

#endif