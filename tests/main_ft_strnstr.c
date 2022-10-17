#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_strnstr searches the first len bytes of the given string
	big for the first occurence of the full string little.
	Characters that appear after \0 are not searched.
	RETURN VALUE :
	A pointer to the first character of the first occurrence of little.
	A pointer to big if little is empty.
	NULL if little occurs nowhere in big.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

int main (void)
{
	printf("%s\n", ft_strnstr("queijo", "", 3));
	printf("%s\n", ft_strnstr("queijo", "qu", 3));
    return (0);
}