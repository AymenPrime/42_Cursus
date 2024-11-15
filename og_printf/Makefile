CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	ft_printf.c functions_one.c functions_two.c

FUN = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(FUN)
	ar rcs $(NAME) $(FUN)

clean:
	rm -f $(FUN)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re