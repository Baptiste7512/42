#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;	
}

int main (void)
{
	int div;
	int mod;
	int a;
	int b;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &div, &mod);

	printf("%d ,", div);
	printf("%d", mod);
	return 0;
}
