#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	int i;
	i = 26;
	while (i > 0)
	{
		ft_putchar(96 + i);
		i--;
	}
}

int main (void)
{
	ft_print_reverse_alphabet();
}
