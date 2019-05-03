#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_display(int plateau[])
{
	int x;

	x = 0;
	while(x < 8)
	{
		ft_putchar(plateau[x] + 48);
		x++;
	}
	ft_putchar('\n');
}

int ft_check(int plateau[], int x, int y)
{
	int j;

	j = 0;
	while(j < 8)
	{
		if(plateau[j] != 0)
		{
			if(plateau[j] + j == x + y || plateau[j] - j == y - x || plateau[j] == y)
				return(1);
		}
		j++;
	}
	return(0);
}

int ft_solution(int plateau[], int x, int y, int result)
{
	if(x == 0 && y == 9)
	{
		return(result);
	}

	if(x == 8)
	{
		result++;
		ft_display(plateau);
		y = plateau[x - 1];
		plateau[x - 1] = 0;
		return(ft_solution(plateau, x - 1, y + 1, result));
	}

	if(y == 9)
	{
		y = plateau[x - 1];
		plateau[x - 1] = 0;
		return(ft_solution(plateau, x - 1, y + 1, result));
	}

	if(ft_check(plateau, x, y) == 0)
	{
		plateau[x] = y;
		y = 1;
		return(ft_solution(plateau, x + 1, y, result));
	}
	else{

		return(ft_solution(plateau, x, y + 1,result));
	}
}

int		ft_eight_queens_puzzle()
{
	int plateau[8];
	int x;
	int y;
	int result;

	x = 0;
	y = 1;
	result = 0;

	while(x < 8)
	{
		plateau[x] = 0;
		x++;
	}
	x = 0;
	return ft_solution(plateau, x, y, result);
}

int		main(void)
{
	printf("%d", ft_eight_queens_puzzle());
	return(0);
}