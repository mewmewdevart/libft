#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larcrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:58:09 by larcrist          #+#    #+#              #
#    Updated: 2022/09/19 17:26:13 by larcrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf

# my functions
SOURCE = ft_isalnum \
 ft_isalpha \
 ft_isascii \
 ft_isdigit \
 ft_isprint \
 ft_tolower \
 ft_toupper \
 ft_strlen \
 ft_strncmp \
 ft_strlcpy \
 ft_atoi \
 ft_strlcat \
 ft_strchr \
 ft_strnstr \
 ft_memcmp \
 ft_bzero \
 ft_memcpy \
 ft_memset \
 ft_memchr \

# .c and .o files
SOURCES = $(addsuffix .c, $(SOURCE))
OBJECTS = $(addsuffix .o, $(SOURCE))

# compilation and linking
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $@ $^

.c.o: $(SOURCES)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(REMOVE) *.o

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re