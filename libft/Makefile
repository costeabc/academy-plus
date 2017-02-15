NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC =	ft_strncmp.c ft_strcmp.c ft_putchar.c ft_putstr.c 

OBJ = $(SRC:.c=.o)

all:	$(NAME)

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	-ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
