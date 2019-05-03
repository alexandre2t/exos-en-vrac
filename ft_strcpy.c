#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while(src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return dest;
}

int		main(void)
{
	char str[5] = "Salut";
	char lol[6] = "coucou";
	printf("%s", ft_strcpy(lol, str));
	return(0);
}