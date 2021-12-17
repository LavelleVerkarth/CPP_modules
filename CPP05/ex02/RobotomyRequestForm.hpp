#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
# include <iostream>

class RobotomyRequestForm: public Form
{
	private:
		void	executedAll(void) const;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm &Fo);
		~RobotomyRequestForm(void);

		class NotSuccess: public std::exception{
			public:
				const char* what() const throw();
		};
		
		RobotomyRequestForm& operator=(RobotomyRequestForm &Fo);
};

#endif