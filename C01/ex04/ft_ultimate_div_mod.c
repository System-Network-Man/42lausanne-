//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int a; 
	int b; 

	a = 8; 
	b = 9;
	
	ft_ultimate_div_mod(&a,&b);
	printf("division:%d\nmodulo:%d\n",a,b);
	return (0);
}
*/
