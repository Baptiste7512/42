#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_int(char nb)
{
	char *nombres;
	nombres = "0123456789";
	write(1,nombres + nb, 1);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483647)
	{
	write(1, "-2147483647",11);
	return;
	}
	if(nb < 0)
	{
	ft_putchar('-');
	ft_putnbr(nb * -1);
	return;
	}

	if(nb < 10 && nb > 0)
		print_int(nb);
	else
	{
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
	return;
	}
}

int main(void)
{
	ft_putnbr(785);
	ft_putnbr(-785);
	ft_putnbr(-2147483647);
}
