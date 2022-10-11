#include "../libft.h"

void ft_putstr_fd(char *s, int fd);

int main (void)
{
    ft_putstr_fd("queijo", 2);
    return (0);
}

void ft_putstr_fd(char *s, int fd)
{
    int index;

    index = 0;
    while(s[index] != '\0')
    {
        write(fd, &s[index], 1);
        index++;
    }
}