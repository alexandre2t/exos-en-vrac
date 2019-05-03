#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return(0);

	if (power == 0)
		return(1);

	else{
		while(power > 0)
		{
			result = result * nb;
			power--;
		}
		return(result);
	}
	return(0);
}

int		main(void)
{
	printf("%d", ft_iterative_power(5, 4));
	return(0);
}