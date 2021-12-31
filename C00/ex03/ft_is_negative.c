#include <unistd.h>

void	ft_is_negative(int n)

{
	if(n >= 0)
	{
	write(1, "P", 1);
	}
	else 
	write (1, "N", 1);
}

int main (void)
{
	int a;
	int b;
	int c;

	a = 5;
	b = 0;
	c = -6;
	
	ft_is_negative(a);
	ft_is_negative(b);
	ft_is_negative(c);
}
