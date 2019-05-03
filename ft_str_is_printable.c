#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] < 32)
			return(0);
		i++;
	}
	return 1;
}

int		main(void)
{
	char lol[] = "\n";

	printf("%d", ft_str_is_printable(lol));
	return 0;
}