#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_isascii checks whether c is an ascii character or not.
	RESULT VALUE :
	Non-zero if c is ascii, zero if not.
*/

int	ft_isascii(int c);

int main (void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", ft_isascii('0' + 1));
	printf("%d\n", ft_isascii('~'));
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii(' '));
	return (0);
}