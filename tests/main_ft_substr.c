#include "../libft.h"
#include <stdio.h>
/*
Cópia parte da string `s` a partir da posição `start` até `len`.
Retorna a substring ou nulo não conseguir alocar.
*/

						//string			start			len
char		*ft_substr(char const *s, unsigned int start, size_t len);

int main (void)
{
	char string[] = "";
	size_t comeco = 2;
	size_t comprimento = 3;

	printf("%s", ft_substr(string, comeco, comprimento));

	return (0);
}
char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!s) //Negação, se for falso retorna 0
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start ) < len)
		len = ft_strlen(s + start);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);

	return (str);
}
