NAME		=	Weapon

SRCS		=	main.cpp  HumanA.cpp HumanB.cpp Weapon.cpp

OBJS		= 	$(SRCS:.cpp=.o)

CC			= 	clang++

FLAGS 		=	-Wall -Wextra -Werror -std=c++98

HEADER		=	HumanA.hpp	HumanB.hpp	Weapon.hpp

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