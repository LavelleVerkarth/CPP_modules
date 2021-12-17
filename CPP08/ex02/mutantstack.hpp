#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack const &Mu): std::stack<T>(Mu) {};
		virtual ~MutantStack(){};
		
		MutantStack operator=(MutantStack const &Mu){
			if (this == Mu)
			{
				this->c = Mu.c;
				return (*this);
			}
			return (*this);
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return (std::stack<T>::c.begin());
		}
		iterator end() {
			return (std::stack<T>::c.end());
		}
};

// template<class T>
// class MutantStack : public std::stack<T> {
// 	public:
// 		MutantStack();
// 		MutantStack(MutantStack const &Mu);
// 		virtual ~MutantStack();

// 		MutantStack& operator=(MutantStack const &Mu);
		
// 		typedef typename std::stack<T>::container_type::iterator iterator;
		
// 		iterator begin();
// 		iterator end();
// };

#endif
