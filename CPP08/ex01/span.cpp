#include "span.hpp"


Span::Span(void){
	iter = 0;
	len = 0;
}

Span::Span(unsigned int N){
	iter = 0;
	len = N;
}

Span::~Span(void){
}

Span::Span(const Span &ar){
	iter = ar.iter;
	len = ar.len;
	arr = ar.arr;
}

Span& Span::operator=(const Span &ar){
	if (this != &ar){
		iter = ar.iter;
		len = ar.len;
		arr = ar.arr;
	}
	return (*this);
}

void Span::addNumber(int n){
	if(iter >= len)
		throw myOverflow();
	arr.push_back(n);
	iter++;
}

int Span::longestSpan(void){
	if (iter < 2)
		throw myErrorSpan();
	std::vector<int>::iterator min = min_element(arr.begin(), arr.end());
	std::vector<int>::iterator max = max_element(arr.begin(), arr.end());
	return (*max - *min);
}

int Span::shortestSpan(void){
	if (iter < 2)
		throw myErrorSpan();
	std::vector<int>::iterator fis;
	int sum;
	sum =  std::max(*(arr.begin()), *(arr.begin() + 1)) - std::min(*(arr.begin()), *(arr.begin() + 1));
	for (std::vector<int>::iterator i = arr.begin(); i != arr.begin() + iter - 1; i++){
		fis = i;
			for (std::vector<int>::iterator j = i + 1; j != arr.begin() + iter; j++){
				sum = std::min(sum, std::max(*i, *j) - std::min(*i, *j));
			}
	}
	return (sum);
}


