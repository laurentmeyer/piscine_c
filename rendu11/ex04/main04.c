#include "ft_list.h"
#include <stdlib.h>
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

t_list 	*ft_create_elem(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return(list);
}

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (new_elem)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}

t_list		*ft_list_last(t_list *begin_list);

int			main(void)
{
	t_list	*list;
	int		i;
	int		j;
	int		k;

	list = 0;
	ft_putnbr(ft_list_last(list) == 0);
	//ft_putnbr(*((int *)ft_list_last(list)->data) == 0);
	ft_putchar('\n');
	i = 42;
	list = ft_create_elem(&i);
	j = 12;
	ft_list_push_front(&list, &j);
	k = 256;
	ft_list_push_front(&list, &k);
	ft_print_int_list(list);
	ft_putchar('\n');
	ft_putnbr(*((int *)ft_list_last(list)->data));
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_int_list(list);
	ft_putchar('\n');
	return (0);
}
