//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
	char str[] = "fsafsadf"; 

	ft_strlen(str);
 	printf("resultat:%d\n",ft_strlen(str)); 
	return (0); 
}
*/
