#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c);

int main (void)
{
    printf("\n-------◊ INICIANDO TESTE : FT_ISALNUM ◊-------\n");
    printf("ft_isalnum: ");
    printf("%d", ft_isalnum(48)); //1
    printf("%d", ft_isalnum(-48)); //0
    printf("%d", ft_isalnum(97)); //0
    printf("%d", ft_isalnum(-97)); //0
    printf("%d", ft_isalnum(120)); //0
    printf("%d", ft_isalnum(129)); //0
    printf("%d", ft_isalnum('a')); //0
    printf("%d", ft_isalnum('0')); //1
    printf("%d", ft_isalnum('\200')); //0
    printf("%d", ft_isalnum(0101)); //0
    printf("%d", ft_isalnum(256)); //0

    return (0);
}

int	ft_isalnum(int c)
{
    if ((c >= 48) && (c <= 57))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}