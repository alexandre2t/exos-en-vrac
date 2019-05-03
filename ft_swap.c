#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	ft_putchar(*a + '0');
	ft_putchar(*b + '0');
}

int main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 1;
	d = 2;
	a = &c;
	b = &d;
	ft_swap(a, b);
}