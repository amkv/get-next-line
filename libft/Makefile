# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 12:02:02 by akalmyko          #+#    #+#              #
#    Updated: 2016/09/21 12:02:04 by akalmyko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -c
RM = /bin/rm -rfv
CFILES = ft_bzero.c \
ft_strchr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strjoin.c \
ft_strlen.c \
ft_strncpy.c \
ft_strnew.c
OFILES = $(CFILES:.c=.o)

.PHONY: clean fclean re all

all: $(NAME)

$(NAME):
	@echo compiling...
	@$(CC) $(FLAGS) $(CFILES)
	@ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	@$(RM) $(OFILES) | wc -l | tr '\n' ' ' && echo ft_*.o files deleted

fclean: clean
	@$(RM) $(NAME) | wc -l | tr '\n' ' ' && echo $(NAME) deleted

re: fclean all
