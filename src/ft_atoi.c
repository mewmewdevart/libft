#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int	index;
    int symbol;
    int result;

	index = 0;
	symbol = 1;
	result = 0;
	while(nptr[index] == 32)
	{
		index++;
	}

	return(index);
}

int main(void)
{
    printf("%d", ft_atoi(" "));//return 1 pq é true
    return(0);
}