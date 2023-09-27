
#include "libft.h"

char	 *ft_strjoin (char const *s1, char const *s2)
{
	char	*str;
	size_t	ind;

	ind = 0;
	str = (char *)malloc((ft_strlen((char*)s1)+ft_strlen((char*)s2))*sizeof(char const));
	if (!str)
		return (0);
	while (ind < (size_t)ft_strlen((char*)s1))
	{
		str[ind] = s1[ind];
		ind++;
	}
	ind = 0;	
	while (ind < (size_t)ft_strlen((char*)s2))
	{
		str[(size_t)ft_strlen((char*)s1)+ind] = s2[ind];
		ind++;
	}
	return (str);
}
/*
int main (void)
{
	char	str1[25] = "5primera cadena 5";
	char	str2[25] = "";

	printf("esta es la cadena resultado %s \n", ft_strjoin(str1, str2));
	return 0;
}*/