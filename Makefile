# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slouham <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:17:23 by slouham           #+#    #+#              #
#    Updated: 2023/12/11 16:03:44 by slouham          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
                  
NAME = libft.a
SRC = ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c \
	ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c \
	ft_strmapi.c ft_substr.c ft_calloc.c ft_isprint.c ft_memmove.c ft_putstr_fd.c \
	ft_strjoin.c ft_strncmp.c ft_tolower.c ft_isalnum.c ft_itoa.c ft_memset.c \
	ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c \
	ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $@ $^

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(BONUS_OBJ) : $(BONUS_SRC)
	$(CC) $(CFLAGS) -c $(BONUS_SRC)
	ar rc $(NAME) $(BONUS_OBJ)

clean :
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
