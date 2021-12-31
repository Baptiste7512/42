#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_num(char x)
{
	char *nombres;
	nombres = "0123456789";
	write(1, nombres + x, 1);
}

void	affiche_num(int n1, int n2, int n3)
{
	print_num(n1);
	print_num(n2);
	print_num(n3);
	if(!(n1 == 7 && n2 == 8 && n3 == 9)) 
	{
	ft_putchar(' ');
	ft_putchar(',');
	}
}
void	ft_print_comb(void)
{
	int n1;
	int n2;
	int n3;

	n1 = 0;
	while(n1 < 9)
	{
	n2 = n1 + 1;	
		while(n2 < 10)
		{
		n3 = n2 + 1;
			while(n3 < 10)
			{
			affiche_num(n1, n2, n3);
			n3++;
			}
			n2++;
		}
		n1++;
	}
}


int main (void)
{
	ft_print_comb();
}
