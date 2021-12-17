NAME		=	DiamondTrap

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS		= 	$(SRCS:.cpp=.o)

CC			= 	clang++

FLAGS 		=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

HEADER		=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

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