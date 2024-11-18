# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 16:16:20 by ggoncalv          #+#    #+#              #
#    Updated: 2024/11/18 16:27:44 by ggoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
NAME_TEST = libftprintf_test

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c
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