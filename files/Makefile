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
			@echo -e "$(PINK)Compiling the server.$(CLEAR)"
			@$(CC) $(CFLAGS) -o $(SERVER) $(SERVER).c
			@echo -e "$(GREEN)[OK]$(CLEAR)"
			@sleep 0.5
			@echo -e "$(PINK)Compiling the Client.$(CLEAR)"
			@echo -e "$(GREEN)[OK]$(CLEAR)"
			@sleep 0.5
			@$(CC) $(CFLAGS) -o $(CLIENT) $(CLIENT).c
			@echo -e "$(GREEN)Success!$(CLEAR)"

clean:
			@echo -e "$(RED)Removing all compiled files.$(CLEAR)"
			@$(RM) $(CLIENT) $(SERVER)
			@sleep 0.5
			@echo -e "$(GREEN)Success!$(CLEAR)"

fclean:		clean

re:			fclean all

.PHONY: 	all clean fclean re