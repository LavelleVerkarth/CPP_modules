#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm: public Form
{
	private:
		void	executedAll(void) const;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm &Fo);
		~PresidentialPardonForm(void);

		
		PresidentialPardonForm& operator=(PresidentialPardonForm &Fo);
};

#endif