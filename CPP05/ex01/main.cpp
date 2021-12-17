#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat top("Top", 1);
		Bureaucrat bot("Bot", 150);
		Form form("fomrm-1", 100, 100);
		std::cout << form << std::endl;
		bot.signForm(form);
		std::cout << form << std::endl;
		top.signForm(form);
		std::cout << form << std::endl;
		top.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "------grade signed high------\n";
		Form form("fomrm-1", 0, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "------grade signed low-------\n";
		Form form("fomrm-1", 151, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "------grade execute high-----\n";
		Form form("fomrm-1", 100, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "------grade execute low------\n";
		Form form("fomrm-1", 100, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}