#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while(src[i] && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main (void)
{
	char	dest[50] = "Biatch";
	char	*src;
	int	size;

	size = 2;
	src = "salami";

	printf("%s", ft_strncpy(dest, src, size));
	return 0;
}
