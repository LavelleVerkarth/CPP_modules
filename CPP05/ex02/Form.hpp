#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>

class Form
{
	protected:
		const std::string	name;
		bool				sign;
		const int			grade_execute;
		const int			grade_sign;
		const std::string	target;
		virtual void	executedAll(void) const = 0;
	public:
		Form(void);
		Form(const std::string name, const int sign, const int execute, const std::string target);
		Form(Form &Fo);
		virtual ~Form(void);

		std::string	getName(void) const;
		bool		getSign(void) const;
		int			getGradeSign(void) const;
		int			getGradeExecute(void) const;
		void		beSigned(const class Bureaucrat& Bu);
		void		execute(Bureaucrat const & executor) const;
		std::string	getTarget(void);

		class FormNotSigned: public std::exception{
			public:
				const char* what() const throw();
		};

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