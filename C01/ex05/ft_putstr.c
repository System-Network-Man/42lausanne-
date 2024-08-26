#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i; 

	i = 0; 
	while (str[i] != '\0̈́')
	{
		write(1, &str, 1);
		i++;
	}
	
}

int	main(void)
{
	char str[];

	str = "sadfs1dfj";
	ft_putstr(str);
	printf("str:%s",str);
	return (0); 
}
