#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if(nb < 0)
	{
		return(0);
	}

	if(nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}

	if(nb == 0)
	{
		return(1);
	}
	return (result);
}

int main(void)
{
	printf("%d", ft_recursive_factorial(12));
	return(0);
}