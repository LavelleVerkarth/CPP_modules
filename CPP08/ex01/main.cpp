#include "span.hpp"

int main()
{
	// Span sp = Span(5);
	// sp.addNumber(5);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// try{
	// 	sp.addNumber(11);
	// }
	// catch(std::exception &e){
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;

	int asd;
	srand(time(NULL));
	int count = 1000;
	Span sp = Span(count);
	for(int i = 0; i < count; i++)
	{
		asd = rand() % (count * 10000);
		// std::cout << asd <<std::endl;
		sp.addNumber(asd);
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}