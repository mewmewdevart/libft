#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_strlcat appends the given string src to the end of 
	dst. It will append at most dstsize - ft_strlen(dst) - 1 and 
	nul-terminate the result.
	Note : space for the terminating \0 character must be included in dstsize.
	RETURN VALUE :
	The total length of the string that it tried to create : the initial
	length of dst + the length of src, with the goal to facilitate
	truncaction detection.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size);

int main (void)
{
    return (0);
}