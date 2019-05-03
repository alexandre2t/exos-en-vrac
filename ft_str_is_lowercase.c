#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] < 'a' || str[i] > 'z')
			return 0;
		i++;
	}
	return 1;
}

int		main(void)
{
	char lol[] = "";

	printf("%d", ft_str_is_lowercase(lol));
	return 0;
}