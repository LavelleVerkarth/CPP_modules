#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>

class Contact
{
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone;
		std::string	secret;

	public:
		Contact(void);
		~Contact(void);
		void		add(int count);
		void		search(void);
		void		setInformation(std::string str, int i);
		void		print(void);
		int			is_empty(void);
		std::string getInformation(int i);
};

class Phonebook
{
	private:
		int		count;
		Contact	cont[8];
		void	select_contact(void);
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
};

#endif