#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
	{
		i++;
		if(dest[i + 1] == '\0')
		{
			i++;
			while(src[j] && j < nb)
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\0';
		}
	}
	return(dest);
}

int		main(void)
{
	char dest[20] = "coucou";
	char src[] = "bonjour";
	int nb = 3;

	printf("%s", ft_strncat(dest, src, nb));
	return 0;
}