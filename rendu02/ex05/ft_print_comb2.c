void	ft_putchar(char c);

void	print_abcd(int a, int b, int c, int d)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar(' ');
	ft_putchar('0' + c);
	ft_putchar('0' + d);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	while (a++ < 10 && (b = 0) + 1)
		while (b++ < 10 && (10 * (a - 1) + b - 1 < 98)
				&& (c = a - 1) + 1 && (d = b - 1) + 1)
			while (c++ < 10 && (d = 0) + 1)
				while (d++ < 10)
					if (10 * (a - 1) + b - 1 < 10 * (c - 1) + d - 1)
					{
						print_abcd(a - 1, b - 1, c - 1, d - 1);
						ft_putchar(',');
						ft_putchar(' ');
					}
	print_abcd(9, 8, 9, 9);
}
