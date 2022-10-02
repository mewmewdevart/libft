 #include <stdio.h>

int ft_bzero(char *s, size_t n);

//revisao do meritissimo

int main(int argc, char *argv[])
{
    char    s[] = "Miau";
    int        i;

    i = 0;
    while (i < 5)
    {
        printf("caracter %d antes da bzero: %d\t%c\n", i, s[i], s[i]); // printa no output
        i++;
    }

    ft_bzero(s, 5);
    printf("\n");

    i = 0;
    while (i < 5)
    {
        printf("caracter %d depois da bzero: %d %c\n", i, s[i], s[i]); // printa no output
        i++;
    }    
        
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