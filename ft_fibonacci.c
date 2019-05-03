#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_fibonacci(int index)
{
	int result;

	result = 0;
	if(index < 0)
		return(-1);

	if(index == 0)
	{
		return(0);
	}
	if(index == 1)
	{
		return(1);
	}

	return result = ft_fibonacci(index - 1) + ft_fibonacci(index-2);
}

int main(void)
{
	printf("%d", ft_fibonacci(3));
	return(0);
}