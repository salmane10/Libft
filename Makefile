# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slouham <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:17:23 by slouham           #+#    #+#              #
#    Updated: 2023/12/11 15:17:26 by slouham          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 19:06:00 by boel-bou          #+#    #+#              #
#    Updated: 2023/11/18 01:16:28 by boel-bou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c \
	ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c \
	ft_strmapi.c ft_substr.c ft_calloc.c ft_isprint.c ft_memmove.c ft_putstr_fd.c \
	ft_strjoin.c ft_strncmp.c ft_tolower.c ft_isalnum.c ft_itoa.c ft_memset.c \
	ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c \
	ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c
BONUS_SRC = ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstmap_bonus.c ft_lstadd_front_bonus.c \
	ft_lstiter_bonus.c ft_lstnew_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $@ $^

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(BONUS_OBJ) : $(BONUS_SRC)
	$(CC) $(CFLAGS) -c $(BONUS_SRC)
	ar rc $(NAME) $(BONUS_OBJ)

bonus : $(BONUS_OBJ)

clean :
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus