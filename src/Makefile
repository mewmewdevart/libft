#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larcrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:58:09 by larcrist          #+#    #+#              #
#    Updated: 2022/09/14 17:26:13 by larcrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf

SOURCE = ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_tolower \
	ft_toupper \
	ft_strlen \
	ft_strncmp

SOURCES = $(addsuffix .c, $(SOURCE))
OBJECTS = $(addsuffix .o, $(SOURCE))

.c.o: $(SOURCES)
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $@ $^

clean:
	$(REMOVE) *.o

fclean: clean
	$(REMOVE) $(NAME)

re: clean all

#dont forget of phony rule