#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm: public Form
{
	private:
		void	executedAll(void) const;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &Fo);
		~ShrubberyCreationForm(void);

		
		ShrubberyCreationForm& operator=(ShrubberyCreationForm &Fo);

		class FileNotOpen: public std::exception{
			public:
				const char* what() const throw();
		};
	
};

#endif