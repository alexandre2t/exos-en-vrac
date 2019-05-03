#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] > 'a' && str[i] < 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return(str);
}

int		main(void)
{
	char lol[7] = "BonJour";

	printf("%s", ft_strupcase(lol));
	return 0;
}