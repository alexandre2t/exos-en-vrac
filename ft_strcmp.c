#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] == s2[i])
	{
		if(s1[i] == '\0' && s2[i] == '\0')
			return 0;
		i++;
	}
	j = s1[i] - s2[i];
	return j;
}

int		main(void)
{
	char s1[7] = "Coucou3";
	char s2[8] = "Coucou95";

	printf("%d", ft_strcmp(s1, s2));
	return 0;
}