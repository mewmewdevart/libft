#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_strchr finds the first occurence of character c in
	string str.
	RETURN VALUE :
	A pointer to the first occurence of c in str.
	NULL if c is not found.
*/

char		*ft_strchr(const char *s, int c);

int main (void)
{
	printf("%s\n", ft_strchr("larissa", 'i'));
	printf("%s\n", ft_strchr("9876543210", '5'));
	printf("%s\n", ft_strchr("teste \n test2", '\n'));
	printf("%s\n", ft_strchr("lllll", 'l'));
	printf("%s\n", ft_strchr("l llll", ' '));
    return (0);
}