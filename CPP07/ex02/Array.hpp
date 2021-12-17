#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
	private:
		unsigned int len;
		T* data;
		
	public:
		Array(void){len = 0; data = NULL;}
		Array(unsigned int n){len = n; data = new T[n];}
		Array(const Array &ar){
			len = ar.len;
			data = new T[len];
			for (size_t i = 0; i < len; i++)
				data[i] = ar.data[i];
		}
		~Array(void){
			delete[] data;
		}


		class MyIndexOut: public std::exception{
			public:
				const char* what() const throw(){return ("The element is out of the limits!");}
		};
		Array& operator=(const Array &ar){
			if (this != &ar){
				if (data){
					delete[] data;
				}
				
				len = ar.len;
				data = new T[len];
				for (size_t i = 0; i < len; i++)
					data[i] = ar.data[i];
			}
			return (*this);
		}
		T& operator[](unsigned int i){
			if (i >= len){
				throw MyIndexOut();
			}
			return (data[i]);
		}
		
		unsigned int size(void){return (len);}

};


#endif