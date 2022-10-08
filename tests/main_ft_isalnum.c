#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_isalnum checks whether the value of c is alphanumeric.
	RETURN VALUE :
	Non-zero if c is alphanumeric (numbers and letters), zero if not.
*/

int	ft_isalnum(int c);

int main (void)
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('0' + 1));
	printf("%d\n", ft_isalnum('~'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum(' '));
	return (0);
}