#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main (void)
{
    printf("%d", ft_strncmp("bob", "boa", 3));
    return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while ((!(s1[index] == '\0' && s2[index] == '\0') && index < n))
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}
