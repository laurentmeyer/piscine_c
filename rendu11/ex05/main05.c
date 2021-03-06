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
	if (list == 0)
	{
		ft_putstr("NULL list\n");
		return ;
	}
	while (list->next != NULL)
	{
		ft_putnbr(*((int *)list->data));
		ft_putchar('\n');
		list = list->next;
	}
	ft_putnbr(*((int *)list->data));
	ft_putchar('\n');
}

void		ft_print_str_list(t_list *list)
{
	if (list == 0)
	{
		ft_putstr("NULL list\n");
		return ;
	}
	while (list->next != NULL)
	{
		ft_putstr(*((char **)list->data));
		ft_putchar('\n');
		list = list->next;
	}
	ft_putstr(*((char **)list->data));
	ft_putchar('\n');
}

int		ft_list_size(t_list *begin_list)
{
	int acc;
	
	acc = 0;
	if (begin_list)
	{
		acc = 1;
		while (begin_list->next != 0)
		{
			begin_list = begin_list->next;
			acc++;
		}
	}
	return (acc);
}

t_list		*ft_list_push_params(int ac, char **av);

int			main(int argc, char **argv)
{
	t_list	*list;

	list = ft_list_push_params(argc, argv);
	ft_print_str_list(list);
	ft_putnbr(ft_list_size(list));
	return (0);
}
