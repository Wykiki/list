# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/19 11:31:35 by jle-mene          #+#    #+#              #
#    Updated: 2016/12/23 16:06:26 by jle-mene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		list.a

SRC_NAME =	\
			lst_new\
			lst_del\
			lst_size\
			lst_append\
			lst_prepend\
			lst_prev\
			lst_next\
			lst_head\
			lst_tail\
			lst_swap\
			lst_for_each

EXT = .c

SRC_DIR =		./src/
INC_DIR =		./inc/
OBJ_DIR =		./obj/

CC = 		clang
FLAGS = 	-Wall -Werror -Wextra

AR = ar rc

SRC =		$(addprefix $(SRC_DIR), $(addsuffix $(EXT), $(SRC_NAME)))
OBJ	=		$(addprefix $(OBJ_DIR), $(SRC:.c=.o))

NAME_TAR =	transfer.tar


all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $@ $^
	@echo "\033[92;1mList compiled\033[0m";

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(LIBFTMLX):
	@$(MAKE) -C $(LIBFTMLX_DIR)

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) -o $@ -c $< -I $(INC_DIR)

clean:
	@rm -rf $(OBJ)
	@echo "\033[91;1mList objects removed\033[0m";

fclean: clean
	@rm -f $(NAME)
	@echo "\033[91;1mList binary removed\033[0m";


re: fclean all

tar: fclean
	@echo "\033[92;1mProject compressed\033[0m";
	@tar -cf $(NAME_TAR) $(SRC) Makefile $(addsuffix .h, $(NAME))
