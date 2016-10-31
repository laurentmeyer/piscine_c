void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i++ < 7)
	{
		j = i;
		while (j++ < 9)
		{
			k = j;
			while (k++ < 10)
			{
				ft_putchar('0' + i - 1);
				ft_putchar('0' + j - 1);
				ft_putchar('0' + k - 1);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
}
