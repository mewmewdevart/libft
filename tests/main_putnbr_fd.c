#include "../libft.h"

//reestudar a logica
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);

int main (void)
{
    ft_putnbr_fd(42, 1);
    return (0);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-', 1);
        ft_putchar_fd('2', 1);
        ft_putnbr_fd(1147483648, 1); 
    }
    else if (n < 0)
    {
        ft_putchar_fd('-', 1);
        n = -n;
        ft_putnbr_fd(n, 1);
    }
    else if (n > 9)
    {
        ft_putnbr_fd (n/10, 1);
        ft_putnbr_fd(n%10, 1);
    }
    else
        {
            ft_putchar_fd(n+48, 1);
        }
}