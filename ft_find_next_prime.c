#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if(nb <= 1)
		return(0);

	while(i < nb)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return(nb);
}

int main(void)
{
	printf("%d", ft_find_next_prime(90));
	return(0);
}