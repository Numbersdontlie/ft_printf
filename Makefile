NAME = libftprintf.a

SRCS = ft_print_char.c ft_print_hexa.c ft_print_nbr.c ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c ft_printf.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS} libftprintf.h

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJS}
	rm -rf ./a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re