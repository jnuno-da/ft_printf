# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 10:43:36 by jnuno-da          #+#    #+#              #
#    Updated: 2024/11/10 12:00:35 by jnuno-da         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra
CC = cc

SRCS = ft_printf.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c

OBJ = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f 

#Rules

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJS)
	@echo "Objects deleted"

fclean:
	$(RM) $(OBJ) $(NAME) $(BONUS_OBJS)
	@echo "Libft deleted"

re: fclean all


