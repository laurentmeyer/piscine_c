void	ft_putchar(char c);

int		power(int n, int exp)
{
	if (exp <= 0)
		return (1);
	return (n * power(n, exp - 1));
}

void	ft_putnbrn(int nb, int n)
{
	if (n == 0)
		return;
	if (nb / power(10, n - 1) == 0)
	{
		ft_putchar('0');
		ft_putnbrn(nb, n - 1);
	}
	else
	{
		if (nb / 10 != 0)
			ft_putnbrn(nb / 10, n - 1);
		ft_putchar('0' + nb % 10);
	}
}

int		is_increasing(int nb)
{
	int	a;

	if (nb == 0)
		return (0);
	a = nb % 10;
	nb /= 10;
	while (nb > 0)
	{
		if (a <= nb % 10)
			return (0);
		a = nb % 10;
		nb /= 10;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	a;
	int	max;

	a = 0;
	max = 0;
	while (a < n)
	{
		max = max + (9 - a) * power(10, a);
		++a;
	}
	a = 0;
	while (a++ < max)
		if (is_increasing(a - 1))
		{
			ft_putnbrn(a - 1, n);
			ft_putchar(',');
			ft_putchar(' ');
		}
	ft_putnbrn(max, n);
}
