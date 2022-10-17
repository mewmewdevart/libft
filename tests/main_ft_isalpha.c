#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_isalpha checks whether c is alphabetic or not.
	RETURN VALUE :
	Non-zero if c is alphabetic, zero if not.
*/

int	ft_isalpha(int c);

int main (void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('0' + 1));
	printf("%d\n", ft_isalpha('~'));
	printf("%d\n", ft_isalpha('\n'));
	printf("%d\n", ft_isalpha(' '));
	return (0);
}