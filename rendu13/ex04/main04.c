#include "ft_btree.h"
#include <unistd.h>
#include <stdlib.h>

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

void	ft_print_infix_str(t_btree *root)
{
	if (root->left)
		ft_print_infix_str(root->left);
	ft_putstr(*((char **)(root->item)));
	ft_putchar('\n');
	if (root->right)
		ft_print_infix_str(root->right);
}

void	ft_print_infix_int(t_btree *root)
{
	if (root->left)
		ft_print_infix_int(root->left);
	ft_putnbr(*((int *)(root->item)));
	ft_putchar('\n');
	if (root->right)
		ft_print_infix_int(root->right);
}

void	ft_print_prefix_int(t_btree *root)
{
	ft_putnbr(*((int *)(root->item)));
	ft_putchar('\n');
	if (root->left)
		ft_print_prefix_int(root->left);
	if (root->right)
		ft_print_prefix_int(root->right);
}

t_btree		*btree_create_node(void *item)
{
	t_btree		*new_node;

	new_node = (t_btree *)malloc(sizeof(t_btree));
	if (new_node)
	{
		new_node->left = 0;
		new_node->right = 0;
		new_node->item = item;
	}
	return (new_node);
}

void	ft_double_item(void *node)
{
	t_btree	*temp;

	temp = (t_btree *)node;
	*(int *)(temp->item) = 2 * *(int *)(temp->item);
}


void	ft_print_node(void *node)
{
	t_btree	*temp;

	temp = (t_btree *)node;
	ft_putnbr(*(int *)(temp->item));
}

int		compare_ints(void *a, void *b)
{
	int	*i;
	int *j;

	i = (int *)a;
	j = (int *)b;
	if (a < b)
		return(1);
	else if (a == b)
		return (0);
	else
		return (-1);
}

typedef	int t_funct(void *, void *);

int		main(void)
{
	t_btree	*tree_parent;
	t_btree	*tree_left;
	t_btree	*tree_left_left;
	t_btree	*tree_left_right;
	t_btree	*tree_right;
	t_btree	*to_insert;
	int		parent;
	int		left;
	int		left_left;
	int		left_right;
	int		right;
	int		new_int;
	t_funct	funk;

	parent = 20;
	left = 10;
	right = 30;
	left_left = 8;
	left_right = 12;
	new_int = 20;

	tree_parent = btree_create_node(&parent);
	tree_left = btree_create_node(&left);
	tree_left_left = btree_create_node(&left_left);
	tree_left_right = btree_create_node(&left_right);
	tree_right = btree_create_node(&right);

	tree_parent->right = tree_right;
	tree_parent->left = tree_left;
	tree_left->left = tree_left_left;
	tree_left->right = tree_left_right;
	
	ft_print_prefix_int(tree_parent);

	funk = &compare_ints;
	btree_insert_data(&parent, &new_int, &funk);
	ft_putchar('\n');

	ft_print_prefix_int(tree_parent);

	ft_putstr("Test with NULL poiner to function\n");
	btree_apply_suffix(tree_parent, 0);
	ft_putstr("Test with NULL poiner to function\n");
	funk = 0;
	btree_apply_suffix(tree_parent, funk);
	ft_putstr("Test with NULL root\n");
	btree_apply_suffix(0, &ft_double_item);
}
