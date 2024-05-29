NAME = megaphone

SRC = megaphone.cpp
OBJ = $(subst .c,.o.,$(SRC))
DEP = $(subst .o,.d,$(OBJ))

CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.c
	$(CC) $@ $(FLAGS)

