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

char	*ft_strrchr(const char *s, int c);

int main (void)
{
    char str[] = "larissa";
    char ch = 's';

    printf("%s",ft_strrchr(str, ch));

    return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (unsigned char)c)
		{
			return ((char *)&s[index]);
		}
		index--;
	}
	return (NULL);
}