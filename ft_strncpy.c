#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(void)
{
	unsigned int n;
	char dest[6] = "coucou";
	char src[5] = "Salut";

	n = 2;
	n++;
	printf("%s", ft_strncpy(dest, src, n));
	return 0;
}