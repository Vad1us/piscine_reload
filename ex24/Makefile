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

NAME = libft.a
HEADER = includes/
FLAG = -Wall -Wextra -Werror
OPT = -c -I $(HEADER)
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	@ gcc $(FLAG) $(OPT) $(SRCS)
	@ ar rc $(NAME) $(OBJ)

clean:
	@ /bin/rm -f $(OBJ)
fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all

