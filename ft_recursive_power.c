#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = nb;

	if(power == 0)
		return(1);

	if(power < 0)
		return(0);

	if (power == 1)
		return(result);

	if(power > 0)
	{
		result = result * ft_recursive_power(nb, power - 1);
	}

	return(result);
}

int		main(void)
{
	printf("%d", ft_recursive_power(5, 5));
	return(0);
}