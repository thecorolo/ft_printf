# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 01:35:50 by azinbi-           #+#    #+#              #
#    Updated: 2021/12/14 01:35:51 by azinbi-          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.c\
ft_putnbr_base.c\
ft_putnbr.c\
ft_putnbrunsigned.c\
ft_printf.c\
ft_putstr.c\



OBJ = ft_putchar.o\
ft_putnbr.o\
ft_putnbr_base.o\
ft_putstr.o\
ft_putnbrunsigned.o\
ft_printf.o\



CC = gcc -Wall -Werror -Wextra -c

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(SRC)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)


re :  fclean all
