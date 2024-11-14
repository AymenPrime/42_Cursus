CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	ft_printf.c ft_hex_upper.c ft_hex_lower.c ft_pointer.c ft_putnbr.c ft_putunbr.c \
		ft_putchar.c ft_putstr.c

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