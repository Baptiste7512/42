#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
	write(1, str, 1);
	str++;
	}
}

int main(void)
{
	ft_putstr("hello");
}
