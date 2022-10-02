#include <stdio.h>

size_t	ft_strlen(const char *s);

int main (void)
{

    printf("%ld", ft_strlen("bolo"));
    return (0);
}

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
