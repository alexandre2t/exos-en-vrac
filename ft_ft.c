#include <stdio.h>

void ft_ft(int *nbr)
{
	int a;
	nbr = &a;
	a = 3;
	*nbr = 42;
	printf("%d", a);
}

int main(void)
{
	int *nbr;
	int b;
	b = 2;
	nbr = &b;
	ft_ft(nbr);
}