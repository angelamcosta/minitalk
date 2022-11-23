NAME	=	minitalk.a

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

SRC		=	server.c client.c

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all