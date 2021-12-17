#ifndef BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &Bu);
		~Bureaucrat(void);
		std::string getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};

		Bureaucrat& operator=(const Bureaucrat &Bu);
};

	std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bu);

#endif