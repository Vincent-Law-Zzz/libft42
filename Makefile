.PHONY: all clean fclean re

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
		ft_putnbr_fd.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c 	\
		ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c			\
		ft_lstmap.c ft_lstnew.c ft_strjoin_gnl.c get_next_line.c		\
		ft_lstadd_back_content.c ft_lstadd_by_cond.c ft_trnr.c			\
		ft_lstadd_content_by_cond.c ft_lst_iteri.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

$(NAME) :${OBJS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME} 

re: fclean all
