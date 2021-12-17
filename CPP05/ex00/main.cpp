#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat kek("Vasya", 1);
		std::cout<<kek<<std::endl;
		kek.decrementGrade();
		std::cout<<kek<<std::endl;
		kek.incrementGrade();
		std::cout<<kek<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat lol("Petya", 150);
		std::cout<<lol<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat bob("Bob", 151);
		std::cout<<bob<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat bib("Bib", 0);
		std::cout<<bib<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	try
	{
		Bureaucrat bib("Bib", 1);
		bib.incrementGrade();
		std::cout<<bib<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat bib("Bib", 150);
		bib.decrementGrade();
		std::cout<<bib<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}