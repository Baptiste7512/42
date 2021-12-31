#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while( str[i] != '\0')
	{
	i++;
	}
	return (i);
}

int main()
{
	int str;

	printf("%d", ft_strlen("hello"));
	return 0;
}
