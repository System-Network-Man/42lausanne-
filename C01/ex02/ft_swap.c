#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int nbr1;
	int nbr2;
	
	nbr1 = 78; 
	nbr2 = 32;
	 
	printf("avant:%d et %d\n",nbr1,nbr2);
	ft_swap(&nbr1,&nbr2);
	printf("apres:%d et %d\n",nbr1,nbr2);
	return (0); 
}
*/
