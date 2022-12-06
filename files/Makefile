NAME	=	minitalk

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

CLIENT	=	client
SERVER	=	server

RED		=	\033[91;1m
GREEN	=	\033[92;1m
YELLOW	=	\033[93m
BLUE	=	\033[94;1m
PINK	=	\033[95;1m
CLEAR	=	\033[0m

all:		$(NAME)

$(NAME):
			@echo -e "$(YELLOW)Compiling:$(CLEAR)"
			$(CC) $(CFLAGS) -o $(SERVER) $(SERVER).c
			$(CC) $(CFLAGS) -o $(CLIENT) $(CLIENT).c
			@echo -e "$(GREEN)Success!$(CLEAR)"

clean:
			$(RM) $(CLIENT) $(SERVER)

fclean:		clean

re:			fclean all

.PHONY: 	all clean fclean re