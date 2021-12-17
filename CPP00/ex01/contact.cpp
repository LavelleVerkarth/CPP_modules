#include "phonebook.hpp"

Contact::Contact(void){
	index = 0;
}

Contact::~Contact(void){
}

void	Contact::add(int count)
{
	std::string buf;

	index = count + 1;
	std::cout << "Add new contact\n";
	std::cout << "Your first name: ";
	std::cin >> buf;
	setInformation(buf, 1);
	std::cout << "Your last name: ";
	std::cin >> buf;
	setInformation(buf, 2);
	std::cout << "Your nickname: ";
	std::cin >> buf;
	setInformation(buf, 3);
	std::cout << "Your phone number: ";
	std::cin >> buf;
	setInformation(buf, 4);
	std::cout << "Your darkest secret: ";
	std::getline(std::cin, buf);
	std::getline(std::cin, buf);
	setInformation(buf, 5);
	std::cout << "New contact added!\n";
}

void	Contact::setInformation(std::string str, int i)
{
	if (i == 1)
		first_name = str;
	else if (i == 2)
		last_name = str;
	else if (i == 3)
		nick_name = str;
	else if (i == 4)
		phone = str;
	else if (i == 5)
		secret = str;
}

void	Contact::search(void)
{
	std::string buf;
	if (index == 0)
		return ;
	std::cout.width(10);
	std::cout << std::right << index << "|";
	for(int i = 1; i < 4; i++)
	{
		buf = getInformation(i);
		if (buf.length() > 10)
			buf = buf.substr(0, 9) + ".";
		std::cout.width(10);
		std::cout << std::right << buf << "|";
	}
	std::cout << std::endl;
}

std::string		Contact::getInformation(int i)
{
	if (i == 1)
		return (first_name);
	else if (i == 2)
		return (last_name);
	else if (i == 3)
		return (nick_name);
	else if (i == 4)
		return (phone);
	else if (i == 5)
		return (secret);
	return (NULL);
}

int	Contact::is_empty(void){
	return (index);
}

void	Contact::print(void){
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nick_name << std::endl;
	std::cout << "Phone: " << phone << std::endl;
	std::cout << "Secret: " << secret << std::endl;
}