#include "../src/libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t index;
    size_t len_src;

    len_src = ft_strlen(src);
    if (size == 0)
    {
        return (len_src);
    }
    
    index = 0;
    while (index < (size - 1) && src[index] != '\0')
    {
        dst[index] = src[index];
        index++;
    }
    dst[index] = '\0';
    return (len_src);
}

int main (void)
{
    char dst[] = "";
    const char src[] = "Amo tomatinhos";
    size_t size = 15;
    
    printf("%ld", ft_strlcpy(dst, src, size));
    
    return (0);
}