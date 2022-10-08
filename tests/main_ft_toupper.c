#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_toupper converts a given lowercase letter c to its
	uppercase equivalent.
	RETURN VALUE :
	The uppercase equivalent letter.
	The original character c if c is not a lowercase letter.
*/

int	ft_toupper(int c);

int main (void)
{
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", ft_toupper('Z'));
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('z'));
	printf("%d\n", ft_toupper('0' + 1));
	printf("%d\n", ft_toupper('~'));
	printf("%d\n", ft_toupper('\n'));
	printf("%d\n", ft_toupper(' '));
	return (0);
}