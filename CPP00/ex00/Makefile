NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= megaphone.o

CC			= g++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		$(NAME)

.cpp.o:
			@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			@echo "$(NAME) is compiled!"

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re