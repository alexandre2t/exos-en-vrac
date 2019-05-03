#include <stdio.h>

int ft_check(int plateau[], int x, int y)
{
	int k;

	k = 0;
	while(k < 8)
	{
		if(plateau[k] != 0)
		{
			if((plateau[k] + k) == (x + y) || (plateau[k] - k) == (y - x) || plateau[k] == y)
				return(1);
		}
		k++;
	}
	return(0);
}

int ft_solution(int plateau[], int x, int y, int result)
{
	if(x == 0 && y == 9)
	{
		return(result);
	}

	else if(x == 8)
	{
		result++;
		y = plateau[x - 1];
		plateau[x - 1] = 0;
		return(ft_solution(plateau, x - 1, y + 1, result));
	}

	else if(y == 9)
	{
		y = plateau[x - 1];
		plateau[x - 1] = 0;
		return ft_solution(plateau, x - 1, y + 1, result);
	}

	else if(ft_check(plateau, x , y) == 0)
	{
		plateau[x] = y;
		y = 1;
		return(ft_solution(plateau, x + 1, y, result));
	}

	else{
		return(ft_solution(plateau, x, y + 1, result));
	}
}

int ft_eight_queens_puzzle()
{
	int x;
	int y;
	int result;
	int plateau[8];

	x = 0;
	y = 1;
	result = 0;

	while(x < 8)
	{
		plateau[x] = 0;
		x++;
	}

	x = 0;

	return(ft_solution(plateau, x, y, result));
}

int main(void)
{
	printf("%d", ft_eight_queens_puzzle());
	return(0);
}