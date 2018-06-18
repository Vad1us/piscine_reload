# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vradchen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 14:44:48 by vradchen          #+#    #+#              #
#    Updated: 2017/11/15 14:44:49 by vradchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
HEADER = includes/
FLAG = -c -Wall -Wextra -Werror
OPT = -I $(HEADER)
SRCS = main.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_r.c
OBJ = main.o ft_putchar.o ft_putstr.o ft_r.o 

all: $(NAME)

$(NAME):
	@ gcc $(FLAG) $(OPT) $(SRCS)
	@ gcc $(OBJ) -o $(NAME)
	@/bin/rm -f $(OBJ)

clean:
	@ /bin/rm -f $(OBJ)
fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all

