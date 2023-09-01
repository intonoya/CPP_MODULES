NAME		= ScavTrap

SRCS		= $(wildcard *.cpp)

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		$(NAME)

.cpp.o:
			@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			@echo "\x1b[32m$(NAME) is compiled!\x1b[32m"
		
clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re