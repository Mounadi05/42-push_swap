# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amounadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 15:03:55 by amounadi          #+#    #+#              #
#    Updated: 2022/02/21 22:55:30 by amounadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker

SRCS	= algo.c algo2.c push_swap.c linkedlist.c linkedlist2.c operation.c \
		  operation2.c operation3.c sort.c  utils.c 

BONUS_S	= checker.c op2_checker.c op_checker.c op3_checker.c linkedlist.c linkedlist2.c utils.c 

OBJS	= $(SRCS:.c=.o)

BONUS_O	= $(BONUS_S:.c=.o)

GCC		= gcc

FLGS	= -Wall -Wextra -Werror

RM		= rm -f

all:		$(NAME)

$(NAME): $(OBJS) 
			@$(GCC) $(FLGS) $(OBJS) -o $(NAME)
			@echo "\033[1;32m push_swap is ready"

bonus:	$(BONUS)

$(BONUS) : $(BONUS_O)
			@$(GCC) $(FLGS) $(BONUS_O) -o $(BONUS)
			@echo "\033[1;32m checker is ready"
.c.o:
			@$(GCC) $(FLGS) -c $<

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME) $(BONUS)

re:			fclean all

.PHONY:		all bonus clean fclean re
