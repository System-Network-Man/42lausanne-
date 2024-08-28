//#include<stdio.h> 

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Hello";
	char	dest[20];
	
	ft_strcpy(dest,src);
	printf("Chaine source: %s\n", src);
	printf("Chaine destination: %s\n", dest); 
	
	return(0);
}
*/
