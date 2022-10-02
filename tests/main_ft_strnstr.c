#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len);
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

int main (void)
{
    char big[] = "cade bolo voce grande";
    char little[] = "bolo";
    size_t len = 10;

    printf("%s", ft_strnstr(big, little, len));
    return (0);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t index;
    size_t sup;

    if (ft_strlen(little) == 0) //Checando se little é vazio
    {
        return ((char *)big);
    }

    index = 0;
    while (big[index] != '\0' && index < len) //Checando se é nulo e se index é menor que o tamanho informado
    {
        sup = 0;
        while ((big[index + sup] == little[sup]) && (index + sup) < len)
        {
            if(little[sup + 1] == '\0')
                return ((char *)&big[index]);
            sup++;
        }
        index++;
    }
    return (NULL);
}