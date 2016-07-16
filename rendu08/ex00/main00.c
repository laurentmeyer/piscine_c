#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str == 0)
		return ;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int		main(void)
{
	char	**arr;
	int		i;
	char		*str;

	str = "C4kA            t8U4byuTNG              DoQkYTu                 f";
	arr = ft_split_whitespaces(str);
	i = 0;
	while (arr[i])
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

