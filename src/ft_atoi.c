#include "libft.h"
#include <stdio.h>

static int ft_isspace(const char c)
{
    if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\v' || c == '\r')
        return (1);
    return (0);
}
int ft_atoi(const char *nptr)
{
    int	index;
    int symbol;
    int result;

	index = 0;
	symbol = 1;
	result = 0;
    while(ft_isspace(nptr[index]))
        index++;
    if(nptr[index] == '+' || nptr[index] == '-')
    {
        if(nptr[index] == '-')
            symbol = symbol * -1;
        index++;
    }
    while(ft_isdigit(nptr[index]))
    {
        result = (result * 10) + (nptr[index] - 48);
        index++;
    }
    return (symbol * result);
}

int main(void)
{
    printf("%d", ft_atoi("24"));
}