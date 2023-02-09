# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hefurrer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:48:40 by hefurrer          #+#    #+#              #
#    Updated: 2023/02/09 15:48:42 by hefurrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME := project_wrapper
SRC_DIR := src/
OBJ_DIR := obj/
SRC_FILES := main
LIBFT := libft
SRC := $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
CC := gcc -Wall -Werror -Wextra -g

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p obj
	$(CC) -Imlx -c $< -o $@

$(NAME): $(OBJ)
	make -C $(LIBFT)
	$(CC) $(OBJ) -L$(LIBFT) -lft -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re