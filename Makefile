SRC = srcs/set_layout.c

PRINTF = srcs/set_layout_printf.c	\
	srcs/loading_bar.c				\

INCLUDE = -Iinclude

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

PRINTFOBJ = ${PRINTF:.c=.o}

NAME = libft_colors.a

CC = gcc

all: ${NAME}

.c.o:
	@${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	@ar rc ${NAME} ${OBJ}
	@ranlib ${NAME}
	@echo "\033[0;32m\nft_colors sans les fonctions printf: \033[1mPret!\033[0;49;39m\n"

printf: all ${OBJ} ${PRINTFOBJ}
	@ar rc ${NAME} ${PRINTFOBJ}
	@ranlib ${NAME}
	@echo "\033[0;32m\nft_colors avec les fonctions printf: \033[1mPret!\033[0;49;39m\n"

clean:
	@rm -f ${OBJ} ${PRINTFOBJ}
	@echo "\nTous les objets ont etes supprimes\n"

fclean:
	@rm -f ${OBJ} ${PRINTFOBJ} ${NAME}
	@echo "\nTout a ete supprime\n"

echob:

re: fclean echob all

.PHONY: all clean fclean re printf