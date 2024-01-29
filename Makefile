# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 12:51:50 by dcastagn          #+#    #+#              #
#    Updated: 2024/01/29 15:12:34 by dcastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft

LIBFT_LIB = libft.a

SRCS = main.c	\
		utils.c    \
		move_r.c \
		move_rr.c \
		move_s.c  \
		move_p.c \
		ft_sort3n2.c \
		algo.c    \
		num_assign.c \

OBJS	= $(SRCS:%.c=%.o)
RM		= rm -f
CC		= gcc
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)


$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(OBJS) $(LIBFT)/$(LIBFT_LIB) -o $(NAME)

fclean: clean
	$(RM) $(NAME) $(LIBFT)/$(LIBFT_LIB)

clean:
	
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re: fclean all
