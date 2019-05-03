#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while(i < nb)
	{
		if(nb / i == i && nb % i == 0)
			return(i);
		else
			i++;
	}
	return(0);
}

int main(void)
{
	printf("%d", ft_sqrt(100000000));
	return(0);
}