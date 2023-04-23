## List of functions:

### 📁 Files/sources
#### Manipulate_Characters/
* [`ft_isascii`](sources/manipulate_characters/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](sources/manipulate_characters/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](sources/manipulate_characters/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](sources/manipulate_characters/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](sources/manipulate_characters/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](sources/manipulate_characters/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](sources/manipulate_characters/ft_toupper.c)			- lower case to upper case letter conversion.

#### Conversions/
* [`ft_atoi`](sources/conversions/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_itoa`](sources/conversions/ft_itoa.c)					- convert integer to ASCII string.

#### Manipulate_memory/
* [`ft_bzero`](sources/manipulate_memory/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](sources/manipulate_memory/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](sources/manipulate_memory/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](sources/manipulate_memory/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](sources/manipulate_memory/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](sources/manipulate_memory/ft_memcpy.c)		- copy memory area.
* [`ft_calloc`](sources/manipulate_memory/ft_calloc.c)	- memory allocation.
* [`ft_strdup`](sources/manipulate_memory/ft_strdup.c)  - save a copy of a string (with malloc).


#### Manipulate_strings/
* [`ft_strlen`](sources/manipulate_strings/ft_strlen.c)				- find length of string.
* [`ft_strchr`](sources/manipulate_strings/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](sources/manipulate_strings/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](sources/manipulate_strings/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](sources/manipulate_strings/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strlcpy`](sources/manipulate_strings/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](sources/manipulate_strings/ft_strlcat.c)			- size-bounded string concatenation.
* [`ft_substr`](sources/manipulate_strings/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](sources/manipulate_strings/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](ssources/manipulate_strings/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](sources/manipulate_strings/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](sources/manipulate_strings/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](sources/manipulate_strings/ft_striteri.c)			- 

#### File_Descriptor/
* [`ft_putchar_fd`](sources/file_descriptor/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](sources/file_descriptor/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](sources/file_descriptor/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](sources/file_descriptor/ft_putnbr_fd.c)		- output integer to given file.


//soon
int			ft_putstr(char *str);
int			ft_putptr(unsigned long int ptr);
int			ft_puthex(unsigned int number, int flag);

char		*get_next_line(int fd);

/* -------◊	PRINTF	◊------- */
int			ft_printf(const char *str, ...);

* [`ft_swap`](libft/srcs/mem/ft_swap.c) *			- swap value of two integers.
* [`ft_putchar`](libft/srcs/put/ft_putchar.c) *	- output a character to stdout.
* [`ft_putchar_fd`](libft/srcs/put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr`](libft/srcs/put/ft_putstr.c) *		- output string to stdout.
* [`ft_putstr_fd`](libft/srcs/put/ft_putstr_fd.c)		- output string to given file.
* [`ft_ftoa_rnd`](libft/srcs/str/ft_ftoa_rnd.c)			- convert float to ASCII string.
