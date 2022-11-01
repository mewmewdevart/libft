#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larcrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:58:09 by larcrist          #+#    #+#              #
#    Updated: 2022/10/17 00:43:03 by larcrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf

# my functions
SOURCES = sources/conversions/ft_atoi.c \
	sources/conversions/ft_itoa.c \
	sources/file_descriptor/ft_putchar_fd.c \
	sources/file_descriptor/ft_putendl_fd.c \
	sources/file_descriptor/ft_putnbr_fd.c \
	sources/file_descriptor/ft_putstr_fd.c \
	sources/manipulate_characters/ft_isalnum.c \
	sources/manipulate_characters/ft_isalpha.c \
	sources/manipulate_characters/ft_isascii.c \
	sources/manipulate_characters/ft_isdigit.c \
	sources/manipulate_characters/ft_isprint.c \
	sources/manipulate_characters/ft_tolower.c \
	sources/manipulate_characters/ft_toupper.c \
	sources/manipulate_memory/ft_bzero.c \
	sources/manipulate_memory/ft_calloc.c \
	sources/manipulate_memory/ft_memchr.c \
	sources/manipulate_memory/ft_memcmp.c \
	sources/manipulate_memory/ft_memcpy.c \
	sources/manipulate_memory/ft_memmove.c \
	sources/manipulate_memory/ft_memset.c \
	sources/manipulate_memory/ft_strdup.c \
	sources/manipulate_strings/ft_split.c \
	sources/manipulate_strings/ft_strchr.c \
	sources/manipulate_strings/ft_striteri.c \
	sources/manipulate_strings/ft_strjoin.c \
	sources/manipulate_strings/ft_strlcat.c \
	sources/manipulate_strings/ft_strlcpy.c \
	sources/manipulate_strings/ft_strlen.c \
	sources/manipulate_strings/ft_strmapi.c \
	sources/manipulate_strings/ft_strncmp.c \
	sources/manipulate_strings/ft_strnstr.c \
	sources/manipulate_strings/ft_strrchr.c \
	sources/manipulate_strings/ft_strtrim.c \
	sources/manipulate_strings/ft_substr.c \
	sources/get_next_line/get_next_line.c \

# .c files = .o files
OBJECTS = $(SOURCES:.c=.o)

# compilation and linking
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@ $^

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
