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
# include <stdlib.h> // malloc(), free() and maybe size_t

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
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/* -------◊	FUNCTIONS FOR NUMBERS	◊------- */
/* -------◊	WRITE SOMETHING	IN TERMINAL ◊------- */
/* -------◊	MANIPULATE MEMORY	◊------- */
/* -------◊	TO BE CONTINUE	◊------- */
#endif
