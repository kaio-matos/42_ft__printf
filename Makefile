# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 01:21:46 by kmatos-s          #+#    #+#              #
#    Updated: 2022/08/31 01:21:05 by kmatos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CCF_STRICT = -Wall -Wextra -Werror
CCF_DEBUG = -g

CONVERSIONS_SOURCES = conversions/char.c\
							conversions/string.c\
							conversions/pointer.c\
							conversions/decimal.c\
							conversions/int.c\
							conversions/unsigned.c\
							conversions/hexadecimal.c\
							conversions/percent.c
SLOT_SOURCES = slot/slot.c slot/utils.c
UTILS_SOURCES = utils/ft_put.c
SRCS = ft_printf.c deal.c $(SLOT_SOURCES) $(CONVERSIONS_SOURCES) $(UTILS_SOURCES)
OBJS = $(SRCS:.c=.o)

RM = rm -f


all: $(NAME)

$(NAME): $(OBJS)
	make all -C ./libft
	cp ./libft/libft.a libftprintf.a
	ar -crs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CCF_STRICT) -c $< -o $@

debug: $(NAME)
	$(CC) $(CCF_DEBUG) main.c $(SRCS) ./libft/libft.a -o main.x

clean:
	make clean -C libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re debug