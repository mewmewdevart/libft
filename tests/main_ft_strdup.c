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

char *ft_strdup(char *s1);

int main (void)
{
	printf("%c", ft_strdup("larissa"));
	return (0);
}

char *ft_strdup(char *s1)
{
	int	index;
	int	size;
	char	*s2;

	size = ft_strlen(s1) + 1; //para pegar o '\0'
	s2 = malloc (sizeof(char ) * (size + 1));

	index = 0;
	while (s1[index] != '\0')
	{
		s2[index] = s1[index];
		index++;
	}
	s2[index] = '\0';
	return (s2);
}
