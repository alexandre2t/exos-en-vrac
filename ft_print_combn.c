#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned a;
	if(nb < 0)
	{
		a = nb * (-1);
		ft_putchar('-');
	}
	if(nb >= 0)
	{
		a = nb;
	}
	if(a < 10)
	{
		ft_putchar(a + '0');
	}
	if(a > 9)
		{
			ft_putnbr(a / 10);
			ft_putchar((a % 10) + '0');
		}
	}


int ft_puissance(int n)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(i < n)
	{
		j = j * 10;
		i++;
	}
	return (j);
}

int ft_check(int i)
{
	int mem;

	while(i / 10 > 0)
	{
		mem = i % 10;
		i = i / 10;
		if(i % 10 >= mem)
		{
			return(0);
		}
	}
	return(1);
}

void ft_print_combn(int n)
{
	int k;
	int i;

	i = 0;
	k = ft_puissance(n);
	while(i < k)
	{
			if (i / (k / 10) < 1)
			{
				if(i / (k /100) >= 1)
				{
					if(ft_check(i) == 1)
					{
						ft_putchar('0');
						ft_putnbr(i);
						ft_putchar(' ');
					}
				}
			}
			else{
				if(ft_check(i) == 1)
				{
					ft_putnbr(i);
					ft_putchar(' ');
				}
			}
		i++;
	}

	//ft_putnbr(k);
}

int main(void)
{
	ft_print_combn(5);
}
