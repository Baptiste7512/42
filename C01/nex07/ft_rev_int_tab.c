#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char &c)
{
	write(1, &c, 1);
}

void	print_rev(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
	ft_putchar(tab[i] + 48)
	i++;
	}
}
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;

	while((size/2) > i)
	{
	swap = tab[i];
	tab[i] = tab[j];
	tab[j] = swap;
	i++;
	j--;
	}
}

int main()
{
	char a[100] = "1";
	char b[100] = "2";
	char c[100] = "3";

	printf("%d", ft_rev_int_tab('a'));
	return 0;
}
