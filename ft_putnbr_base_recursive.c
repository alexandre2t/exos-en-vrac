#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_check(char *base)
{
	int i;
	int j;

	j = 0;
	while(base[j])
	{
		if(base[j] == '+' || base[j] == '-')
			return 1;
		i = j + 1;
		while(base[i])
		{
			if(base[i] == base[j])
				return 1;
			i++;
		}
		j++;
	}
	if(j < 2)
		return 1;
	return 0;
}

int		ft_check_base(char *base)
{
	int i;

	i = 0;
	while(base[i])
	{
		i++;
	}
	return i;
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int bas;
	unsigned int nb;

	bas = ft_check_base(base);

	if(ft_check(base) == 1)
		return;
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	nb = nbr;
	if(nb >= bas)
	{
		ft_putnbr_base(nb / bas, base);
		ft_putchar(base[nb % bas]);
	}
	else{
		ft_putchar(base[nb]);
	}
}

int		main(void)
{
	char base[9] = "poneyvif\0";

	ft_putnbr_base(-123, base);
	return 0;
}