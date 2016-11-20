# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/19 23:11:00 by akalmyko          #+#    #+#              #
#    Updated: 2016/11/19 23:11:02 by akalmyko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = /bin/rm -rfv
CFILES = main.c \
get_next_line.c \
libft/ft_strcpy.c \
libft/ft_strnew.c \
libft/ft_bzero.c \
libft/ft_strlen.c \
libft/ft_strncpy.c \
libft/ft_strchr.c \
libft/ft_strjoin.c \
libft/ft_strcmp.c
OFILES = $(CFILES:.c=.o)

.PHONY: clean fclean re all

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(CFILES) -o $(NAME)
	./$(NAME) file1 file2

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all