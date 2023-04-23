/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:19:27 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/17 15:04:18 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> // write
# include <stdlib.h> // malloc(), free() and size_t
# include <stdarg.h> // variadic functions

// Buffer_size of gnl
# define BUFFER_SIZE	1024

// Hexadecimal of ft_printf - putptr, puthexa
# define HEX_LOWCASE "0123456789abcdef"
# define HEX_UPCASE  "0123456789ABCDEF"

# define INT_MAX +2147483647
# define INT_MIN -2147483648

# ifdef __linux__
#  define NULLABLE "(nil)"
# else
#  define NULLABLE "0x0"
# endif

/* -------◊	FUNCTIONS TO MANIPULATE CHARACTERS	◊------- */
// Checks for an alphanumeric character; ref. (isalpha(c) || isdigit(c)).
int			ft_isalnum(int c);
// Checks for an alphabetic character.
int			ft_isalpha(int c);
// Checks whether c fits into the ASCII character set.
int			ft_isascii(int c);
// Checks for a decimal digit character.
int			ft_isdigit(int c);
// Checks for any printable character including space.
int			ft_isprint(int c);
// Converts an upper-case letter to the corresponding lower-case letter.
int			ft_tolower(int c);
// Converts a lower-case letter to the corresponding upper-case letter.
int			ft_toupper(int c);
// Outputs the character c to the standard output.
int			ft_putchar(char c);
// Outputs the integer n to the standard output.
int			ft_putnbr(int nb);
// Outputs the unsigned integer n to the standard output.
int			ft_putnbr_unsigned(unsigned int number);

/* -------◊	FUNCTIONS TO MANIPULATE STRINGS	◊------- */
// Calculates the length of the string s.
size_t		ft_strlen(const char *s);
// Copies up to size - 1 characters from the NUL-terminated string src to dst.
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
// Appends the NUL-terminated string src to the end of dst.
size_t		ft_strlcat(char *dst, const char *src, size_t size);
// Compares the first (at most) n bytes of s1 and s2.
int			ft_strncmp(const char *s1, const char *s2, size_t n);
// Outputs the string s to the standard output.
int			ft_putstr(char *str);
// Locates the first occurrence of c (convert char) in the string pointed to s.
char		*ft_strchr(const char *s, int c);
// Locates the last occurrence of c (converted char) in the string pointed to s.
char		*ft_strrchr(const char *s, int c);
// Locates the first occurrence of the NUL-terminated little in the big.
char		*ft_strnstr(const char *big, const char *little, size_t len);
// Returns a substring from the string s.
char		*ft_substr(char const *s, unsigned int start, size_t len);
// Joins two strings s1 and s2 into a new string
char		*ft_strjoin(char const *s1, char const *s2);
// Returns a copy of the s1 without leading or trailing characters in the set
char		*ft_strtrim(char const *s1, char const *set);
// Splits the str into an array of strings, using character c as a delimiter
char		**ft_split(char const *str, char c);
// Applies function f to each character of s and returns the modified string
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// Applies the function f to each character of s, passing its index
//   as the first argument. Then the function modifies the string in-place.
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
// Outputs the hexadecimal representation of a pointer
int			ft_putptr(unsigned long int ptr);
// Outputs the hex representation of a number, with optional flag 'x' or 'X'
int			ft_puthex(unsigned int number, int flag);

/* -------◊		FUNCTIONS TO CONVERSION/STRINGS FOR INTEGERS	◊------- */
// Converts the initial portion of the string nptr to int
int			ft_atoi(const char *nptr);
// Converts integer n to a string representation
char		*ft_itoa(int n);

/* -------◊		FUNCTIONS TO MANIPULATE MEMORY	◊------- */
// Compares the first n bytes of memory areas s1 and s2
int			ft_memcmp(const void *s1, const void *s2, size_t n);
// Sets the first n bytes of the memory area pointed to by s to zero
void		ft_bzero(void *s, size_t n);
// Copies n bytes from memory area src to memory area dest
void		*ft_memcpy(void *dest, const void *src, size_t n);
// Fills the first len bytes of memory area ptr to str with the constant byte c.
void		*ft_memset(void *str, int c, size_t len);
// Copies len bytes from memory area src to memory area dest
void		*ft_memmove(void *dest, const void *src, size_t len);
//  Locates the first occurrence of c (converted unsigned char) in first bytes.
void		*ft_memchr(const void *s, int c, size_t n);
// Allocates memory for an array of NElements of bytes each, and returns a ptr.
void		*ft_calloc(size_t nitems, size_t size);
// Returns a pointer to a new string which is a duplicate of the string s1
char		*ft_strdup(const char *s1);

/* -------◊		FUNCTIONS FILE DESCRIPTOR     ◊------- */
// Writes a character c to the file descriptor fd
void		ft_putchar_fd(char c, int fd);
// Writes the string s to the file descriptor fd
void		ft_putstr_fd(char *s, int fd);
// Writes the string s to the file descriptor fd, followed by a newline
void		ft_putendl_fd(char *s, int fd);
// Outputs the integer n to the file descriptor fd
void		ft_putnbr_fd(int n, int fd);

/* -------◊	GNL	◊------- */
// Reads a line from the file descriptor fd
char		*get_next_line(int fd);

/* -------◊	PRINTF	◊------- */
//P rints formatted output to stdout according to the format string 'str'.
int			ft_printf(const char *str, ...);

#endif
