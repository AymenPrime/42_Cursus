CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	ft_printf.c functions_1.c functions_2.c

FUN = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(FUN)
	ar rcs $(NAME) $(FUN)

clean:
	rm -f $(FUN)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re