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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t index;
    size_t len_src;
    size_t len_dst;

    index = 0;
    len_dst = 0;
    len_src = ft_strlen(src);
    while (dst[len_dst] != '\0' && len_dst < size)
    {
        len_dst++;
    }
    if (len_dst < size)
    {
        while (src[index] != '\0' && (index + len_dst) < (size -1))
        {
            dst[index + len_dst] = src[index];
            index++;
        }
        dst[index + len_dst] = '\0';
    }
    return (len_dst + len_src);

}

int main (void)
{
    char dst[] = "bolo";
    const char src[] = "boloaaaa";
    size_t size = 1222;
    
    printf("%ld", ft_strlcat(dst, src, size));
    
    return (0);
}