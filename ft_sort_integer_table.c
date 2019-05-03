#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while(i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int tab[5] = {5, 4, 2, 3, 1};

	int *lol = &tab[0];
	
	ft_sort_integer_table(lol , 5);
	
	int i;

	i = 0;

	while(i < 5)
	{
		printf("%d", lol[i]);
		i++;
	}
	return(0);
}