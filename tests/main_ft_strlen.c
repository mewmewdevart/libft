#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_strlen measures the length of the given string str,
	excluding the terminating \0 character.
	RETURN VALUE :
	The number of bytes in the string str.
*/

size_t		ft_strlen(const char *s);

int main (void)
{
	char g[20]={'P','r','o','g','r','a','m','\0'};
	//			 0	 1	 2	 3	 4	 5	 6	  7

	printf("Length of string a = %ld\n", ft_strlen("Bola"));
	printf("Length of string b = %ld\n", ft_strlen(" "));
	printf("Length of string c = %ld\n", ft_strlen("343434"));
	printf("Length of string d = %ld\n", ft_strlen("\n"));
	printf("Length of string e = %ld\n", ft_strlen("\0"));
	printf("Length of string f = %ld\n", ft_strlen("-"));
	printf("Length of string g = %ld\n", ft_strlen(g));
    return (0);
}