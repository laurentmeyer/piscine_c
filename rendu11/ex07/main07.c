#include "ft_list.h"
#include <unistd.h>


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

t_list		*ft_list_last(t_list *begin_list)
{
	if (begin_list)
	{
		while (begin_list->next != 0)
		{
			begin_list = begin_list->next;
		}
	}
	return (begin_list);
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

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	if (ac == 1)
		return (0);
	list = ft_create_elem(&av[1]);
	i = 2;
	while (i < ac)
	{
		ft_list_push_front(&list, &av[i]);
		i++;
	}
	return (list);
}

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr);

int			main(void)
{
	t_list	*list;
	t_list	*result;
	int		i;
	int		j;
	int		k;

	list = NULL;
	ft_putstr("With empty list:\n");
	result = ft_list_at(list, 1);
	ft_putstr("Returns NULL pointer: ");
	ft_putnbr(result == 0);
	ft_putchar('\n');

	i = 42;
	list = ft_create_elem(&i);
	ft_putstr("With 1 elem list:\n");
	result = ft_list_at(list, 1);
	ft_putstr("Returns NULL pointer: ");
	ft_putnbr(result == 0);
	ft_putchar('\n');
	ft_putstr("Returns: ");
	ft_putnbr(*(int *)(result->data));
	ft_putchar('\n');

	i = 42;
	list = ft_create_elem(&i);
	j = 12;
	ft_list_push_front(&list, &j);
	k = 256;
	ft_list_push_front(&list, &k);
	ft_putstr("With 3 elems list:\n");
	result = ft_list_at(list, 3);
	ft_putstr("Returns NULL pointer: ");
	ft_putnbr(result == 0);
	ft_putchar('\n');
	ft_putstr("Returns: ");
	ft_putnbr(*(int *)(result->data));
	
	/*
	ft_putchar('\n');
	ft_putnbr(*((int *)ft_list_last(list)->data));
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_int_list(list);
	ft_putchar('\n');
	*/
	return (0);
}
