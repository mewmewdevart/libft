#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_strrchr finds the last occurrence of character c in
	string str.
	RETURN VALUE :
	A pointer to the last occurrence of c in str.
	NULL if c is not found.
*/

char		*ft_strrchr(const char *s, int c);

int main (void)
{
	printf("%s\n", ft_strrchr("larissa", 'i'));
	printf("%s\n", ft_strrchr("9876543210", '5'));
	printf("%s\n", ft_strrchr("teste \n test2", '\n'));
	printf("%s\n", ft_strrchr("lllll", 'l'));
	printf("%s\n", ft_strrchr("l llll", ' '));
    return (0);
}