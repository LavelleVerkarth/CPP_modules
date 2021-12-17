#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
		unsigned int len;
		unsigned int iter;
		std::vector<int> arr;

	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(const Span &ar);

		Span& operator=(const Span &ar);
		class myOverflow: public std::exception{
			public:
				const char* what() const throw(){return ("Сontainer is full");}
		};

		class myErrorSpan: public std::exception{
			public:
				const char* what() const throw(){return ("Not enough numbers");}
		};

		void addNumber(int n);
		int longestSpan(void);
		int shortestSpan(void);
};

#endif