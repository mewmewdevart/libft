#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set);
/* Copia `s1` removendo caracteres localizados em `set`.
Retorna a string criada ou nulo caso a alocação falhe. */
int main (void)
{
    char s1[] = "larissa";
    char set[] = "la";

    printf("%s", ft_strtrim(s1, set));
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t sup;

    if(!s1 || !set)
        return (0);
    while(*s1 != '\0' && ft_strchr(set, *s1)) //Procura na string set pela primeira ocorrência do caractere s1
    {
        s1++;
    }
    sup = ft_strlen(s1); //mede o size
    while (sup && ft_strchr(set, s1[sup])) //Procura na string set pela primeira ocorrência da string s1 [tamanho de size]
    {
        sup--;// de trás pra frente
    }
    return (ft_substr(s1, 0, sup + 1));//retorna a substringue de s1, usa o sup + 1(nulo) como ref
}