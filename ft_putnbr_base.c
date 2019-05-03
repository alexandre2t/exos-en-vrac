#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int result;
	int j;

	i = 0;
	result = 0;
	j = 1;

	while(base[i])
	{
		i++;
	}

	while(nbr != 0)
	{
		result += (nbr % i) * j;
		nbr /= i;
		j *= 10;
	}

	while(j >  1)
	{		
		j /= 10;
		nbr = result / j;
		ft_putchar(base[nbr]);
		result -= (nbr * j);
	}
}

int		main(void)
{
	int nbr;
	char base[] = "poneyvif";

	nbr = 123;
	ft_putnbr_base(nbr, base);
	return 0;
}