#include "Base.hpp"

Base* generate(void)
{
	Base *ret;
    srand(time(0));
	switch (rand() % 3){
		case 1:
			ret = new A();
            std::cout << "!A!\n";
			return(ret);
		case 2:
			ret = new B();
            std::cout << "!B!\n";
			return(ret);
		default:
			ret = new C();
            std::cout << "!C!\n";
			return(ret);
	}
    return (NULL);
}

void identify(Base* p){
	 if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A\n";
    else if(dynamic_cast<B*>(p) != NULL)
        std::cout << "B\n";
    else if(dynamic_cast<C*>(p) != NULL)
        std::cout << "C\n";
    else
        std::cout << "it is not Base\n";

}

void    identify(Base &p)
{
    try
    {
        A & a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A\n";
    }
    catch (std::exception& exp) {}
    try
    {
        B & b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B\n";
    }
    catch (std::exception& exp) {}
    try
    {
        C & c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C\n";
    }
    catch (std::exception& exp) {}
}

int main()
{
    Base* base;
    base = generate();
    if (!base){
        std::cout << "ERROR!\n";
    }
    identify(base);
    identify(*base);
}
