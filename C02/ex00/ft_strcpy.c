#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while(src[i])
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
		return (dest);
}

int main(void)
{
	
	char	dest[50] = "Biatch";
	char	*src;
	
	src = "salamiiiiiiiiii";
	printf("%s", ft_strcpy(dest, src));
	return 0;
}


