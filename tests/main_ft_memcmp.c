#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);
/*
A função da biblioteca C int memcmp(const void *s1 const void *s2, size_t n))
 compara os primeiros n bytes da área de memória str1 e área de memória str2 e mostra a distancia entre ambos.
*/
int main (void)
{
	printf("%d", ft_memcmp("abelha", "abelhb", 6));
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const	unsigned char *s_s1;
	const	unsigned char *s_s2;
	size_t	index;

	index = 0;
	s_s1 = (const unsigned char *)s1;
	s_s2 = (const unsigned char *)s2;
	while (index < n)
	{
		if (s_s1[index] != s_s2[index])
		{
			return (s_s1[index] - s_s2[index]);
		}
		index++;
	}
	return (0);
}