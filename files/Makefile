NAME	=	minitalk

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

CLIENT	=	client
SERVER	=	server

all:		$(NAME)

$(NAME):
			$(CC) $(CFLAGS) -o $(SERVER) $(SERVER).c
			$(CC) $(CFLAGS) -o $(CLIENT) $(CLIENT).c

clean:
			$(RM) $(CLIENT) $(SERVER)

fclean:		clean

re:			fclean all