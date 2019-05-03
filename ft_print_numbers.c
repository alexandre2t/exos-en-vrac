#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int i;
	i = 0;
	while(i < 10)
	{
		ft_putchar(48 + i);
		i++;
	}
}

int main(void)
{
	ft_print_numbers();
}
