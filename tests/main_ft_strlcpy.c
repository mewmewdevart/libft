#include "../src/libft.h"
#include <stdio.h>

/*
	DESCRIPTION :
	The function ft_strlcpy copies up to size - 1 characters from the given
	string src to the given string dst, nul-terminating the result.
	Note : space for the terminating \0 character must be included in dstsize.
	RETURN VALUE :
	The total length of the string that it tried to create : the length of
	src, with the goal to facilitate truncaction detection.
*/

size_t	ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);


int main (void)
{	/*
		Copia até size - 1 bytes de src para dst adicionando um nulo no final. Retorna o tamanho total da string que tentou criar.
*/
	char destiny[] = " "; //passa o conteudo da string de source para destiny mas retorna apenas o tamanho da string source que foi passada
	char source[] = "larissa";
	int number = 3;

	printf("%ld\n", ft_strlcpy(destiny, source, number));
    return (0);
}