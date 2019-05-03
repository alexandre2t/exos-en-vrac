#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int i;
	unsigned int k;

	j = 0;
	i = 0;
	k = 0;
	while(dest[j])
	{
		j++;
	}
	while(src[i])
	{
		i++;
	}
	if((i + j) > size)
	{
		return (i + j);
	}
	else
	{
		k = j + i;
		i = 0;
		while(src[i])
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (k);
}

int		main(void)
{
	char dest[20] = "Coucou";
	char src[] = "bonjour";
	unsigned int size = 11;

	printf("%d", ft_strlcat(dest, src, size));
	return 0;
}