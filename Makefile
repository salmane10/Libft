# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slouham <slouham@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:17:23 by slouham           #+#    #+#              #
#    Updated: 2024/01/16 11:30:14 by slouham          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_itoa.c		\
		ft_atoi.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_putchar_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_striteri.c	\
		ft_strncmp.c	\
		ft_putnbr_fd.c	\
		ft_isascii.c  	\
		ft_isprint.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_strlen.c		\
		ft_strdup.c		\
		ft_strtrim.c	\
		ft_strjoin.c	\
		ft_strmapi.c	\
		ft_substr.c		\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strnstr.c	\
		ft_strrchr.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	ar rc $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re%