#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (unsigned char) c)
            {
                return ((char *)s);
            }
    s++;
    }
    return (NULL);
}
int main (void)
{
    char string[] = "larissa"; 
    int ch = 'i';

    printf("%s", ft_strchr(string, ch));

    return (0);
}