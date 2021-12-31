#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_number(int nbr)
{
	int	a;
	int	b;

	a = (nbr / 10) + 48;
	b = (nbr % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);	
}

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	while(nbr1 < 99)
	{
		nbr2 = nbr1 + 1;
		while(nbr2 < 100) 
			{
			ft_number(nbr1);
			ft_putchar(' ');
			ft_number(nbr2);
			if(nbr1 != 98)
			ft_putchar(',');
			nbr2++;
			}
			nbr1++;
	}
}

int main(void)
{
	ft_print_comb2();
}
