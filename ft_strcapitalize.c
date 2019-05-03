#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(i == 0 && str[i] > 'a' && str[i] < 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		if(str[i] > 'a' && str[i] < 'z' && (str[i - 1] < 'A' || str[i - 1] > 'Z') && (str[i- 1] < '0' || str[i - 1] > '9') && (str[i - 1] < 'a' || str[i] > 'z'))
			str[i] = str[i] - 32;
		if(str[i] > 'A' && str[i] < 'Z' && str[i - 1] > 'a' && str[i - 1] < 'z')
			str[i] = str[i] + 32;
		i++;
	}
	return str;
}

int		main(void)
{
	char lol[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(lol));
	return 0;
}