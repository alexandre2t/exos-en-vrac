#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned a;
	if(nb < 0)
	{
		a = nb * (-1);
		ft_putchar('-');
	}
	if(nb >= 0)
	{
		a = nb;
	}
	if(a < 10)
	{
		ft_putchar(a + '0');
	}
	if(a > 9)
	{
		ft_putnbr(a / 10);
		ft_putchar((a % 10) + '0');
	}
}

int main(void)
{
	ft_putnbr(-2147483648);
}
