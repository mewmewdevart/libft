

#### Functions to manipulate characters ◊
- [`int			ft_isalpha(int c)`](sources/manipulate_characters/ft_isalpha.c)	- Checks for an alphabetic character.
- [`int			ft_isdigit(int c)`](sources/manipulate_characters/ft_isdigit.c)	- Checks for a digit (0 - 9).
- [`int			ft_isalnum(int c)`](sources/manipulate_characters/ft_isalnum.c)	- Checks for an alphanumeric character.
- [`int			ft_isascii(int c)`](sources/manipulate_characters/ft_isascii.c)	- Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
- [`int			ft_isprint(int c)`](sources/manipulate_characters/ft_isprint.c)	- Checks for any printable character including space.
- [`int			ft_tolower(int c)`](sources/manipulate_characters/ft_toupper.c)	- Convert uppercase letters to lowercase.
- [`int			ft_toupper(int c)`](sources/manipulate_characters/ft_tolower.c)	- Convert lowercase letters to uppercase.


#### Functions to manipulate strings ◊
- [`size_t	ft_strlen(const char *s)`](sources/manipulate_strings/ft_strlen.c)	- Find length of string
- [`size_t		ft_strlcpy(char *dst, const char *src, size_t size)`](sources/manipulate_strings/ft_strlcpy.c)	- Size-bounded string copying
- [`size_t		ft_strlcat(char *dst, const char *src, size_t size)`](sources/manipulate_strings/ft_strlcat.c)	- Size-bounded string concatenation.
- [`char		*ft_strchr(const char *s, int c)`](sources/manipulate_strings/ft_strchr.c)	- Locate character in string (first occurrence)
- [`char		*ft_strrchr(const char *s, int c)`](sources/manipulate_strings/ft_strrchr.c)	-  Locate character in string (last occurence)
- [`int			ft_strncmp(const char *s1, const char *s2, size_t n)`](sources/manipulate_strings/ft_strncmp.c)	- Compare strings (size-bounded)
- [`char		*ft_strnstr(const char *big, const char *little, size_t len)`](sources/manipulate_strings/ft_strnstr.c)	- Locate a substring in a string (size-bounded)


- [`char		*ft_substr(char const *s, unsigned int start, size_t len)`](sources/manipulate_strings/ft_substr.c)	- Find substring of a string
- [`char		*ft_strjoin(char const *s1, char const *s2)`](sources/manipulate_strings/ft_strjoin.c)	- concatenate two strings into a new string (with malloc)
- [`char		*ft_strtrim(char const *s1, char const *set)`](sources/manipulate_strings/ft_strtrim.c)	- Trim beginning and end of string with the specified characters
- [`char		**ft_split(char const *str, char c)`](sources/manipulate_strings/ft_split.c)	- Split string, with specified character as delimiter, into an array of strings.
- [`char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))`](sources/manipulate_strings/ft_strmapi.c)	-  Create new string from modifying string with specified function.
- [`void		ft_striteri(char *s, void (*f)(unsigned int, char*))`](sources/manipulate_strings/ft_striteri.c)	- Applies the function f to each character of the string s to create a new string


