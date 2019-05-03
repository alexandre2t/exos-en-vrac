#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i;
	int result;
	int signe;

	i = 0;
	result = 0;
	signe = 1;

	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
	{
		i++;
	}

	if ((str[i] == '-' && (str[i + 1] < 48 || str[i + 1] > 57)) || (str[i] == '+' && (str[i + 1] < 48 || str[i + 1] > 57)))
	{
		return(0);
	}

		if(str[i] == '-')
	{
		signe = -1;
		i++;
	}

		if(str[i] == '+')
	{
		i++;
	}

	while(str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	result = result * signe;
	return (result);
}

int main(void)
{
	char lol[] = "    -2147483648a";
	printf("%d", ft_atoi(lol));
	return(0);
}