#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] < 'A' || str[i] > 'Z')
			return 0;
		i++;
	}
	return 1;
}

int		main(void)
{
	char lol[] = "";

	printf("%d", ft_str_is_uppercase(lol));
	return 0;
}