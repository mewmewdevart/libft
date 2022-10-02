#include <stdio.h>

int ft_bzero(char *s, size_t n);

//Fiz algumas modificações no bzero para entender como ele funciona
//Limpa n bytes da memória apontada por s, faz isso colocando nulos.
//Preenche uma string de bytes com zeros

int main(int argc, char *argv[])
{
    char s[] = "Miau";
    ft_bzero(s, 5);

    printf("%s ", s); // printa no output
    return 0;
}

int    ft_bzero(char *s, size_t n)
{
    size_t index;
    unsigned char *ptr;

    ptr = s;
    index = 0;
    while(index < n)
    {
        ptr[index] = '\0';
        index++;
    }
}

