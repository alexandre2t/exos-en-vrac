#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_iterative_factorial(int nb)
{
	int result;

	result = nb;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return(0);
	nb--;
	while (nb != 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int main(void)
{
	printf("%d", ft_iterative_factorial(6));
	return (0);
}