SERVER_NAME	=	server
CLIENT_NAME	=	client
LIB		=	libft
CFLAGS		=	-Wall -Wextra -Werror
SRCS		=	main_client.c \
			main_server.c
OBJS		=	${SRCS:.c=.o}
LIBFT		=	${LIB}/libft.a
INCLUDE		=	-I./${LIBFT_DIR}
.c.o:
			${CC} ${CFLAGS} ${INCLUDE} -o $@ -c $<

all : $(SERVER_NAME) $(CLIENT_NAME)

clean:;			$(RM) *.o
			${MAKE} -C ${LIBFT_DIR} clea

fclean:clean;		$(RM) $(NAME)
			${MAKE} -C ${LIBFT_DIR} fclean

re:			fclean $(NAME)

.PHONY:			re clean fclean all