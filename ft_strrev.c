#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strrev(char *str)
{
	int i;
	int j;
	int k;
	char c;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	k = i;
	i = i - 1;
	while (j < i)
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
		j++;
		i--;
	}

	i = 0;
	while (i < k)
	{
		ft_putchar(str[i]);
		i++;
	}
	return str;
}

int main(void)
{
	char str[] = "Alexandre";
	ft_strrev(str);
}