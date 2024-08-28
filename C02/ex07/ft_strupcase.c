//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[20] = "fasdfasdfFSDF9safs";

	ft_strupcase(str); 
	printf("Resultat:%s\n",str); 

	return (0); 
}
*/
