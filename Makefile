
.PHONY: all clean fclean re

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_pchar.c ft_pdecimal.c ft_phexal.c ft_phexau.c ft_pptr.c ft_printf.c ft_pstr.c ft_punsigned.c ft_strchr.c ft_which_type.c
OBJ = ${SRC:.c=.o}

${NAME}:
	@CC ${CFLAGS} -c ${SRC}
	@ar rsc ${NAME} ${OBJ}

all: ${NAME}

clean:
	@rm -f ${OBJ}

fclean: clean
	@rm -f ${NAME}

re: fclean all