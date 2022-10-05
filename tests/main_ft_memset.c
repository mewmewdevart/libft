#include <stdio.h>

void *ft_memset(void *str, int c, size_t len);

int main (void)
{

    return (0);
}
/*
Copia o caractere `c` para os primeiros `n` caracteres em `*str`.
Retorna o ponteiro `str`.
*/
void *ft_memset(void *str, int c, size_t len)
{
    size_t index;
    unsigned char *ptr;

    ptr = str;
    index = 0;
    while (index < len)
    {
        ptr[index] = (unsigned char)c;
        index++;
    }
    return (str);
}