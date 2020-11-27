# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 20:18:18 by aapollo           #+#    #+#              #
#    Updated: 2020/11/26 00:17:51 by aapollo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re bonus

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c		\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c 			\
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c	\
		ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c	\
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c	\
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c	ft_itoa.c	\
		ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c		\
		ft_putnbr_fd.c
BNS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c 	\
		ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c			\
		ft_lstmap.c

OBJS = ${SRCS:.c=.o}

BNSOBJS = ${BNS:.c=.o}

all: ${NAME}

$(NAME) :${OBJS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

clean:
		rm -f ${OBJS} ${BNSOBJS}

fclean:	clean
		rm -f ${NAME} 

re: fclean all

bonus: all ${BNSOBJS}
		ar rc ${NAME} ${BNSOBJS}
		ranlib ${NAME}