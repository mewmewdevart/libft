#include "../libft.h"

void ft_putendl_fd(char *s, int fd);

int main (void)
{
    ft_putendl_fd("larissa", 2);
    return (0);
}

void ft_putendl_fd(char *s, int fd)
{
    int index;

    index = 0;
    while (s[index] != '\0')
    {
        write(fd, &s[index], 1);
        index++;
    }
        write(fd, "\n", 1);
}