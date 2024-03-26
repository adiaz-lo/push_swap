# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 12:49:56 by adiaz-lo          #+#    #+#              #
#    Updated: 2023/09/26 11:56:36 by adiaz-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

DEPS = libft/libft.a

CC = clang

CCFLAGS = -Wall -Werror -Wextra

INCLUDE = includes/push_swap.h

ARFLAGS = -rcs

RM = rm -f

SRC_PATH = src/
OBJ_PATH = obj/

SRCS = push_swap.c \


OBJS = $(SRCS:.c=.o)

TEST = main.c

TEST_OUT = ./a.out

all : $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(DEPS): 
	make -C Libft

$(NAME): $(DEPS) $(INCLUDE) $(OBJS)
	cp $(DEPS) $(NAME)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)
	make -C Libft fclean

fclean : clean
	$(RM) $(NAME)

test : $(DEPS) $(SRCS) $(TEST) $(INCLUDE)
	$(CC) $(CCFLAGS) $(SRCS) $(TEST) $(DEPS) && $(TEST_OUT)

re : fclean $(NAME) all
