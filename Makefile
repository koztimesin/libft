# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 18:03:42 by ksaffron          #+#    #+#              #
#    Updated: 2021/10/26 18:52:16 by ksaffron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIST = ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isalnum.c	\
		ft_isalpha.c		ft_isascii.c		ft_isdigit.c		ft_islower.c	\
		ft_isprint.c		ft_isupper.c		ft_itoa.c		ft_memchr.c	\
		ft_memcmp.c		ft_memcpy.c		ft_memmove.c		ft_memset.c	\
		ft_putchar_fd.c		ft_putendl_fd.c		ft_putnbr_fd.c		ft_putstr_fd.c	\
		ft_split.c		ft_strchr.c		ft_strdup.c		ft_striteri.c	\
		ft_strjoin.c		ft_strlcat.c		ft_strlcpy.c		ft_strlen.c	\
		ft_strmapi.c		ft_strncmp.c		ft_strnstr.c		ft_strrchr.c	\
		ft_strtrim.c		ft_substr.c		ft_tolower.c		ft_toupper.c

BONUS = ft_lstnew_bonus.c		ft_lstsize_bonus.c		ft_lstadd_front_bonus.c		ft_lstlast_bonus.c	\
		ft_lstadd_back_bonus.c		ft_lstdelone_bonus.c		ft_lstclear_bonus.c		ft_lstiter_bonus.c	\
		ft_lstmap_bonus.c

SRC = $(LIST)
SRC_BONUS = $(BONUS)

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ) $(if $(findstring bonus, $(MAKECMDGOALS)), $(OBJ_BONUS))
	ar rcs $(NAME) $?

%.o : %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@ -I libft.h

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

bonus:	$(NAME)

.PHONY:	all bonus clean fclean re
