######################  MANDATORY  #######################
SERVER_NAME	=	server
CLIENT_NAME	=	client
SRCS		=	main_client.c \
			main_server.c
OBJS		=	${SRCS:.c=.o}

###################### BONUS ############################
SERVER_NAME_BONUS	=	server_bonus
CLIENT_NAME_BONUS	=	client_bonus
BONUS_SRCS		=	main_client_bonus.c \
				main_server_bonus.c
BONUS_OBJS		=	${BONUS_SRCS:.c=.o}

###################### GCC MAKE #########################
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

###################### LIBRARY ##########################
LIBFT_DIR	=	libft
LIBFT		=	libft.a
LIBS		=	-L./${LIBFT_DIR} -lft
INCLUDE		=	-I./${LIBFT_DIR} -I./includes

###################### MAKE RULES #######################
all	:	${LIBFT} ${SERVER_NAME} ${CLIENT_NAME}

bonus	:	${LIBFT} ${SERVER_NAME_BONUS} ${CLIENT_NAME_BONUS}

.c.o	:
		${CC} ${CFLAGS} ${INCLUDE} ${LIBS} -o $@ -c $<
${LIBFT}:
		make -C ${LIBFT_DIR}

###################### MAKE MANDATORY ####################
${SERVER_NAME}:		${OBJS}
			${CC} main_server.o ${LIBS} -o $@

${CLIENT_NAME}:		${OBJS}
			${CC} main_client.o ${LIBS} -o $@

###################### MAKE BONUS #######################
${SERVER_NAME_BONUS}:	${BONUS_OBJS}
			${CC} main_server_bonus.o ${LIBS} -o $@

${CLIENT_NAME_BONUS}:	${BONUS_OBJS}
			${CC} main_client_bonus.o ${LIBS} -o $@


###################### CLEAR RULES #######################
clean:;			${RM} *.o
			${MAKE} -C ${LIBFT_DIR} clean

fclean:clean;		${RM} ${CLIENT_NAME} ${SERVER_NAME} ${CLIENT_NAME_BONUS} ${SERVER_NAME_BONUS}
			${MAKE} fclean -C ${LIBFT_DIR}

re:			fclean all

.PHONY:			re clean fclean all