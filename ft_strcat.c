#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while(dest[j])
	{
		j++;
		if (dest[j + 1] == '\0')
		{
			j++;
			while(src[i])
			{
				dest[j] = src[i];
				i++;
				j++;
			}
			dest[j] = '\0';
		}
	}
	return(dest);
}

int		main(void)
{
	char dest[20] = "coucou";
	char src[7] = "bonjour";

	printf("%s", ft_strcat(dest, src));
	return(0);
}