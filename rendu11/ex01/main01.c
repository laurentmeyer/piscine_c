#include "ft_list.h"
#include <unistd.h>

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

void		ft_print_int_list(t_list *list)
{
	while (list->next != NULL)
	{
		ft_putnbr(*((int *)list->data));
		ft_putchar('\n');
		list = list->next;
	}
	ft_putnbr(*((int *)list->data));
	ft_putchar('\n');
}

void		ft_list_push_back(t_list **begin_list, void *data);

int			main(void)
{
	t_list	*list;
	int		i;
	int		j;
	int		k;

	i = 42;
	list = ft_create_elem(&i);
	j = 12;
	ft_list_push_back(&list, &j);
	k = 256;
	ft_list_push_back(&list, &k);
	ft_print_int_list(list);
	return (0);
}
