NAME		=	FragTrap

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS		= 	$(SRCS:.cpp=.o)

CC			= 	clang++

FLAGS 		=	-Wall -Wextra -Werror -std=c++98

HEADER		=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

.cpp.o:
				clang++ $(FLAGS) -c $< -o ${<:.cpp=.o}
all			:	$(NAME)

$(NAME)		:	$(OBJS)	$(HEADER)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re