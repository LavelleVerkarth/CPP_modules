#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Form* scf;
		Form* ppf;
		Form* unf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("shrubbery creation", "Home");
		ppf = someRandomIntern.makeForm("presidential pardon", "Man");
		std::cout << *rrf <<std::endl;
		std::cout << *scf <<std::endl;
		std::cout << *ppf <<std::endl;
		delete rrf;
		delete scf;
		delete ppf;

		unf = someRandomIntern.makeForm("unknow form", "LOL");
		std::cout << *unf <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}