# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 14:55:47 by gprada-t          #+#    #+#              #
#    Updated: 2024/07/10 21:35:13 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) Makefile
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
