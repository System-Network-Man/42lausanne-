//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != i)
	{
		resultat *= nb;
		nb--;
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("resultat: %d\n",ft_iterative_factorial(0));
	return (0); 
}
*/
