#include <stdio.h>
#include <stdlib.h>

void	ft_calloc (size_t nitems, size_t size);
void	ft_bzero(void *s, size_t n);

int main(int argc, char *argv[])
{
    ft_calloc(5, 10);
    return 0;
}

void	ft_calloc (size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
	{
		return (0);
	}
	ft_bzero(ptr, nitems * size); //deletando as informacoes dos bytes alocados, os transformando em '\0'
	return (ptr);
}
