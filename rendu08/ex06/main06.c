// gcc -Wall -Wextra -Werror ft_param_to_tab.c ft_show_tab.c main06.c ft_stock_par.h ft_split_whitespaces.c ../lib/ft_putchar.c

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_par *par);

int main(int argc, char **argv)
{
	ft_show_tab(ft_param_to_tab(argc, argv));
	return (0);
}
