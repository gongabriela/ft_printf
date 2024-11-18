# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 11:19:48 by ggoncalv          #+#    #+#              #
#    Updated: 2024/11/14 17:43:53 by ggoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
NAME_TEST = libft_test

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_strdup.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_substr.c ft_calloc.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c
OBJ = $(SRC:.c=.o)

#TEST________________________________________________________________________
SRC_TEST =  main.c 
OBJ_TEST = $(SRC_TEST:.c=.o)
#____________________________________________________________________________

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
#TEST_______________________________________________________________________________

test: all $(OBJ_TEST)
	$(CC) $(CFLAGS) $(OBJ_TEST) $(NAME) -o $(NAME_TEST)

all_test: $(NAME_TEST)

fcleantest: fclean
	rm -rf $(OBJ_TEST) $(NAME_TEST)

retest: fcleantest test
