#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_isdigit checks whether c is a digit character or not.
	RETURN VALUE:
	Non-zero if c is a digit, zero if not.
*/

int	ft_isdigit(int c);

int main (void)
{
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('Z'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('z'));
	printf("%d\n", ft_isdigit('0' + 1));
	printf("%d\n", ft_isdigit('~'));
	printf("%d\n", ft_isdigit('\n'));
	printf("%d\n", ft_isdigit(' '));
	return (0);
}