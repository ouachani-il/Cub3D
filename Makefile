# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilouacha <ilouacha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:38:44 by ilham_oua         #+#    #+#              #
#    Updated: 2024/02/27 14:52:02 by ilouacha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= main.c

OBJS	=	${SRCS:.c=.o}

#LIBFT = libft/libft.a
#PRINTF = printf/libftprintf.a

NAME	= so_long

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g3

.c.o:
			${CC} ${CFLAGS} -I/usr/include -Imlx -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS}
#			make -C libft
#			make -C printf
#			$(CC) $(OBJS) $(PRINTF) $(LIBFT) -g -o $(NAME) -Lmlx -lmlx -L/usr/lib -Imlx -lXext -lX11 -lm -lz
			$(CC) $(OBJS) -g -o $(NAME) -Lmlx -lmlx -L/usr/lib -Imlx -lXext -lX11 -lm -lz

clean:
				make -C libft clean 
				make -C printf clean
				rm -f ${OBJS}

fclean:		clean
				make clean
				rm -f ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
#cc -I /usr/local/include main.c -L /usr/local/lib -Lmlx -lmlx -lXext -lX11 -lm  -lz