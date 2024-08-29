//#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[50] = "hello";
	char src[] = "World"; 

	ft_strcat(dest,src); 
	printf("resultat:%s\n",dest); 	
	return (0); 
}
*/
