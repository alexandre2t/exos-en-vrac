#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(src[i])
		i++;
	if (size >= i)
	{
		i = 0;
		while(src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return i;
}

int		main(void)
{
	char dest[20] = "Coucou";
	char src[] = "Bonjour";
	unsigned int size = 20;

	printf("%d", ft_strlcpy(dest, src, size));
	return 0;
}