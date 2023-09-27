
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char *substr;
	size_t lng;

	lng = 1;
	substr = (char *)&s[start];
	while (*substr)
	{
		substr++;
		lng++;
	}
	if (lng > len)
		lng = len;
	substr = (char *)malloc(lng*sizeof(char const));
	if (!substr)
		return(0);
	while (--lng)
	{
		*substr = s[start];
		substr++;
		start++;
	}
	*substr = '\0';
	return (substr);
}
/*
int main (void)
{
	char text[100]="Este es la cadena larga para copiar la sub";
	char *substr;
	
	substr = ft_substr(text, 25, 15);
	printf("Esta es la cadena original: %s \n", text);
	printf("Esta es la subcadena:  %s \n", substr);
	return 0;
}
*/