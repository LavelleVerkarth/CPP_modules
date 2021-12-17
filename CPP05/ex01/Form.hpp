#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			grade_execute;
		const int			grade_sign;

	public:
		Form(void);
		Form(const std::string name, const int sign, const int execute);
		Form(Form &Fo);
		~Form(void);

		std::string	getName(void) const;
		bool		getSign(void) const;
		int			getGradeSign(void) const;
		int			getGradeExecute(void) const;
		void		beSigned(const class Bureaucrat& Bu);

		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
		
		class FormAlredysigned: public std::exception{
			public:
				const char* what() const throw();
		};

		Form& operator=(Form &Fo);
};

std::ostream& operator<<(std::ostream& os, const Form& Bu);



#endif