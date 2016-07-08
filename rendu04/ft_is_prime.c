#include <stdio.h>

int		int ft_is_prime(int nb)
{
	int primes[nb];
	int i;

	i = 0;
	while (i < nb)
	{
		primes[i] = i + 1;
		
}

int		main(void)
{
	printf("%d\n", ft_is_prime(23));
	return (0);
}
