#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while(str[i] != '\0')
	{
		if(str[i] == to_find[j])
		{
			k = i - 1;
			while(str[i] == to_find[j])
			{

				i++;
				j++;
			}
		}
		if(to_find[j] == '\0')
		{
			return str + k;
		}

		i++;
	}
	return ("null");
}

int main(void)
{
	char str[25] = "azertyazertyuioazertyuiop";
	char to_find[5] = "yuioa";
	printf("%s", ft_strstr(str, to_find));
	return 0;
}