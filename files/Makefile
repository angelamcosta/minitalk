NAME	=	minitalk

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

CLIENT	=	client
SERVER	=	server

RED		=	\033[91;1m
GREEN	=	\033[92;1m
YELLOW	=	\033[93;1m
BLUE	=	\033[94;1m
PINK	=	\033[95;1m
CLEAR	=	\033[0m

all:		$(NAME)

$(NAME):
			@echo "$(BLUE)Make all$(CLEAR)\n$(PINK)Compiling the server.$(CLEAR)"
			@$(CC) $(CFLAGS) -o $(SERVER) $(SERVER).c
			@echo "$(GREEN)[OK]$(CLEAR)"
			@sleep 0.2
			@echo "$(PINK)Compiling the Client.$(CLEAR)\n$(GREEN)[OK]$(CLEAR)"
			@sleep 0.2
			@$(CC) $(CFLAGS) -o $(CLIENT) $(CLIENT).c
			@echo "$(GREEN)Success!$(CLEAR)\n$(YELLOW)Finished$(CLEAR)\n"

clean:
			@echo "$(BLUE)Make clean/fclean$(CLEAR)\n$(RED)Removing all compiled files.$(CLEAR)"
			@$(RM) $(CLIENT) $(SERVER)
			@sleep 0.2
			@echo "$(GREEN)Success!$(CLEAR)\n$(YELLOW)Finished$(CLEAR)\n"

fclean:		clean

re:			fclean all

.PHONY: 	all clean fclean re