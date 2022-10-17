#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_tolower converts a given uppercase letter c to its
	lowercase equivalent.
	RETURN VALUE :
	The lowercase equivalent letter.
	The original character c if c is not an uppercase letter.	
*/

int	ft_tolower(int c);

int main (void)
{
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('Z'));
	printf("%d\n", ft_tolower('a'));
	printf("%d\n", ft_tolower('z'));
	printf("%d\n", ft_tolower('0' + 1));
	printf("%d\n", ft_tolower('~'));
	printf("%d\n", ft_tolower('\n'));
	printf("%d\n", ft_tolower(' '));
	return (0);
}