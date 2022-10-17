#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_isprint checks whether c is a printable character or not.
	RETURN VALUE :
	Non-zero if c is printable, zero if not.
*/

int	ft_isprint(int c);

int main (void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('Z'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('z'));
	printf("%d\n", ft_isprint('0' + 1));
	printf("%d\n", ft_isprint('~'));
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint(' '));
	return (0);
}