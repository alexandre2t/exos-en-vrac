#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(s1[i] == s2[i] && i < n)
	{
		if(s1[i] == '\0' && s2[i] == '\0')
			return 0;
		i++;
	}
	return s1[i] - s2[i];
}

int		main(void)
{
	unsigned int n;
	char s1[7] = "Coucou6";
	char s2[8] = "Coucou76";

	n = 3;

	printf("%d", ft_strncmp(s1, s2, n));
	return 0;
}