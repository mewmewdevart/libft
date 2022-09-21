/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:19:27 by larcrist          #+#    #+#             */
/*   Updated: 2022/09/14 17:29:37 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> // write
# include <stdio.h>
# include <stdlib.h> // malloc(), free() and size_t

/* -------◊	MANIPULATE CHARACTERS	◊------- */
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

/* -------◊	MANIPULATE STRINGS	◊------- */
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s1); //mallocagem


/* -------◊	FUNCTIONS FOR NUMBERS	◊------- */
int ft_atoi(const char *nptr);


/* -------◊	MANIPULATE MEMORY	◊------- */
void *memset(void *str, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_calloc(size_t nitems, size_t size);



/* -------◊	    FILE DESCRIPTOR     ◊------- */

/* -------◊	MAYBE BÔNUS [? lists]	◊------- */

/* -------◊	TO BE CONTINUE	◊------- */
#endif
