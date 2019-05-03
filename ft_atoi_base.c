#include <stdio.h>

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i])
	{
		j = i + 1;
		if(base[i] == '+' || base[i] == '-')
			return(-1);
		while(base[j])
		{
			if(base[j] == base[i])
				return(-1);
			j++;
		}
		i++;
	}
	if(i < 2)
		return(-1);
	return i;
}

int		ft_check_str(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while(str[i])
	{
		j++;
		if(base[j] == '\0')
			return(-1);
		if(str[i] == base[j] || str[i] == '+' || str[i] == '-' || str[i] == ' ')
		{
			i++;
			j = -1;
		}
	}
	return 0;
}

int		ft_traduction(char *base, char *str, int taille_base)
{
	int i;
	int j;
	int result;

	i = 0;
	result = 0;

	while((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		j = 0;
		while(base[j] != str[i])
			j++;
		result = (result * taille_base) + j;
		i++;
	}
	return result;
}

int		ft_atoi_base(char *str, char *base)
{
	int taille_base;
	int i;
	int signe;
	int result;

	taille_base = ft_check_base(base);
	signe = 1;
	i = 0;
	if(taille_base == -1 || ft_check_str(str, base) == -1)
		return 0;
	while(str[i] == ' ')
			i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			signe = -1;
		i++;
	}
	result = ft_traduction(base, str, taille_base);
	result = result * signe;
	return result;
}

int		main(void)
{
	printf("%d", ft_atoi_base("COUCOU", "COU"));
	return 0;
}