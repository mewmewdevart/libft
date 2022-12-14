#include <stdio.h>
#include <libft.h>


char ft_strjoin(char const *s1, char const s2);

int main (void)
{
	printf("%s", ft_strjoin("larissa", "tomate"));
}
char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	index;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		str[index] == s1[index];
		index++;
	}
	while (s2[index] != '\0')
	{
		str[index] = s2[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
