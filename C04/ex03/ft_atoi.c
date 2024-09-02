//#include<stdio.h>

int	convert(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] < '9')
		{
			nb = nb * 10 + (str[i] - '0');
		}
		i++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
	}
	nb = convert (str);
	return (nb * sign);
}
/*
int	main()
{
	char str[] = "  -+df8"; 
	
	printf("resultat: %d\n",ft_atoi(str)); 
	return (0); 
}
*/
