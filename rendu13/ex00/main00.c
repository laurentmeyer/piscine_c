#include "ft_btree.h"
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

void	ft_print_btree(t_btree *root)
{
	if (root->left)
		ft_print_btree(root->left);
	ft_putstr(*((char **)(root->item)));
	ft_putchar('\n');
	if (root->right)
		ft_print_btree(root->right);
}

t_btree					*btree_create_node(void *item);

int		main(void)
{
	t_btree	*tree_begin;
	t_btree	*tree_branch;
	char	*parent;
	char	*child;

	parent = "daddy";
	child = "kiddo";
	tree_begin = btree_create_node(&parent);
	tree_branch = btree_create_node(&child);
	tree_begin->right = tree_branch;
	ft_print_btree(tree_begin);
}
