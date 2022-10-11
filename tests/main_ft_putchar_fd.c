#include "../libft.h"
#include <fcntl.h>

/* 
void ft_putchar_fd(char c, int fd);
int main (void)
{   
    int fd;

    ft_putchar_fd('z', 1);
    ft_putchar_fd('\n', 1);
    ft_putchar_fd('b', 2);
    ft_putchar_fd('\n', 2);
    ft_putchar_fd('l', 3);
    ft_putchar_fd('\n', 3);
    ft_putchar_fd('\n', 3);

    fd = open("mewmew.txt", O_WRONLY); //my fd
    ft_putchar_fd('l', fd);
    ft_putchar_fd('a', fd);
    ft_putchar_fd('r', fd);
    ft_putchar_fd('a', fd);
    return(0);
}
*/

void ft_putchar_fd(char c, int fd)
{
    //0 , 1 e 2 ... tabela de baguios que preneche  os slots com oe ndereço de memoria do arquivo q for aberto acrescentado em +1 a  cada momento que for aberto
    write(fd, &c, 1 );
}
