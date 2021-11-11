# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 09:49:18 by hmaronen          #+#    #+#              #
#    Updated: 2021/11/11 16:17:50 by hmaronen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c			\
ft_memchr.c ft_memcmp.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c	\
ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c		\
ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c	\
ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar.c			\
ft_putstr.c ft_strlen.c ft_putnbr.c
HEADER = libft.h
O_FILES = *.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(HEADER) -c $(SRCS)
	ar rc $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
