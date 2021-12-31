#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void	ft_swap(int *a, int *b)
{	
	int c;

	c= *a;
	*a = *b;
	*b = c;
	
}

int main (void)
{

	int a;
	int b;
	int c;
	
	c=45;
	a=10;
	b=5;

	ft_swap(&a, &b);
	printf("%d", a);
	return 0;
}

