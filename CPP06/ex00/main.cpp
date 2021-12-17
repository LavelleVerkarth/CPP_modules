#include <iostream>
#include <cctype>

void print_convert(double c)
{
	int max = 1;
	if (isprint(static_cast<int>(c)))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else if (c >=0 && c < 128)
		std::cout << "char: "  << "Non displayable"<< std::endl;
	else 
		std::cout << "char: impossible" << std::endl;
	if (c == std::numeric_limits<double>::infinity() || static_cast<long>(c) > INT_MAX || static_cast<long>(c) < INT_MIN)
	{
		std::cout << "int: impossible" << std::endl;
		max = 0;
	}
	else
		std::cout << "int: "  << static_cast<int>(c) << std::endl;
	if ((c - int(c) == 0 && c < 1000000  && c > -1000000) || ((c >= 100000 || c <= -100000) && max))
	{
		std::cout << "float: "  << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: "  << static_cast<double>(c) << ".0" << std::endl;
	}
	else{
		std::cout << "float: "  << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: "  << static_cast<double>(c) << std::endl;
	}
}


void print_convert_int(int c)
{
	if (isprint(static_cast<int>(c)))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else if (c >=0 && c < 128)
		std::cout << "char: "  << "Non displayable"<< std::endl;
	else 
		std::cout << "char: impossible" << std::endl;
	if (c == std::numeric_limits<double>::infinity())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: "  << static_cast<int>(c) << std::endl;
	if (c - int(c) == 0 && c < 1000000 && c > -1000000)
	{
		std::cout << "float: "  << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: "  << static_cast<double>(c) << ".0" << std::endl;
	}
	else{
		std::cout << "float: "  << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: "  << static_cast<double>(c) << std::endl;
	}
}

void nan_inf_print(std::string arg){
	if (arg == "nan" || arg == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible"  << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (arg[0] == '-')
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible"  << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible"  << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}

}

void	ft_parser(char *arg){
	int count = 0;
	int count_e = 0;

	std::string pars = arg;
	// if (pars.length() == 1 && !isdigit(pars[0]))
	if (pars.length() == 1)
	{
		print_convert(static_cast<double>(arg[0]));
		return ;
	}
	if (pars == "nan" || pars == "nanf" || pars == "inf" || pars == "+inf" || pars == "-inf")
	{
		nan_inf_print(pars);
		return ;
	}
	for(int i = 0; i < (int)pars.length(); i++)
	{
		if((pars[i] == '+' || pars[i] == '-') && i == 0)
			i++;
		if(!isdigit(pars[i])){
			if (pars[i] == '.' && count == 0)
				count = 1;
			else if (pars[i] == 'e' && (int)pars.length() != i + 1 && (int)pars.length() != i + 2 && pars[i + 1] == '+' && count_e++ == 0)
				i++;
			else if(!(pars[i] == 'f' && count == 1 && (int)pars.length() == i + 1 ))
			{
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible"  << std::endl;
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: impossible" << std::endl;
				return ;
			}
		}
	}
	if (count || count_e)
		print_convert(atof(arg));
	else if (atol(arg) > INT_MAX || atol(arg) < INT_MIN)
		print_convert(atof(arg));
	else
		print_convert_int(atoi(arg));
}

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Bad arguments!\n";
		return (0);
	}
		ft_parser(argv[1]);
}
