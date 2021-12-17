#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat top("Top", 1);
		Bureaucrat bot("Bot", 150);
		RobotomyRequestForm form2("Robot");
		PresidentialPardonForm form3("Presid");
		ShrubberyCreationForm form("Home");
		std::cout << form << std::endl;
		top.signForm(form);
		std::cout << form << std::endl;
		top.executeForm(form);
		std::cout << "------------------------------------\n";
		std::cout << form2 << std::endl;
		top.signForm(form2);
		std::cout << form2 << std::endl;
		top.executeForm(form2);
		std::cout << "------------------------------------\n";
		std::cout << form3 << std::endl;
		top.signForm(form3);
		std::cout << form3 << std::endl;
		top.executeForm(form3);
		std::cout << "------------------------------------\n";
		bot.executeForm(form);
		bot.executeForm(form2);
		bot.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}