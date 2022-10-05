#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);
/*
	The function ft_memcpy copies n bytes from memory area src to memory
	area dst.


	RETURN VALUE :
	A pointer to dst. NULL if src and dst are both NULL.

*/
int main (void)
{
    ft_memcpy();
    return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t index;

	if (!dest && !src)
	{
		return (0);
	}

	index = 0;
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dest);
}