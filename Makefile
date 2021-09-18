SERVER_NAME	=	server
CLIENT_NAME	=	client
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	main_client.c \
			main_server.c
OBJS		=	${SRCS:.c=.o}

LIBFT_DIR	=	libft
LIBFT		=	libft.a
LIBS		=	-L./${LIBFT_DIR} -lft
INCLUDE		=	-I./${LIBFT_DIR} -I./includes

all :  ${LIBFT} ${SERVER_NAME} ${CLIENT_NAME}

.c.o:
			${CC} ${INCLUDE} ${LIBS} -o $@ -c $<

${LIBFT}:
		make -C ${LIBFT_DIR}

${SERVER_NAME}:		${OBJS}
			${CC} main_server.o ${LIBS} -o $@
			# ${RM} main_server.o

${CLIENT_NAME}:		${OBJS}
			${CC} main_client.o ${LIBS} -o $@
			# ${RM} main_client.o

clean:;			${RM} *.o
			${MAKE} -C ${LIBFT_DIR} clean

fclean:clean;		${RM} ${CLIENT_NAME} ${SERVER_NAME}
			${MAKE} fclean -C ${LIBFT_DIR}


re:			@fclean all

.PHONY:			re clean fclean all