#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ft_putchar(i + '0');
	return (i);
}

int main(void)
{
	char *str;

	str = "lool";
	ft_strlen(str);
}