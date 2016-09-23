#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#define	ARRSIZE	81
#define	ERROR	0
#define	OK		1

int		valid_size(int ac, char **av)
{
	int	i;

	if (ac != 10)
		return (ERROR);
	i = 1;
	while (i < ac)
		if (ft_strlen(av[i++]) != 9)
			return (ERROR);
	return (OK);
}

int		copy_input(char **av, char *s)
{
	int		i;
	int 	j;
	char 	c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = av[i + 1][j];
			if (c == '.' || (c >= '0' && c <= '9'))
				s[9 * i + j] = c;
			else
				return (ERROR);
			j++;
		}
		i++;
	}
	return (OK);
}

int		valid_char(char	*s, int n)
{
	int		i;
	char	c;

	if (s[n] == '.')
		return (OK);
	i = 0;
	while (i < ARRSIZE)
	{
		if (i != n && s[i] == s[n]
				&& (i / 9 == n / 9
					|| i % 9 == n % 9
					|| (((i / 9) / 3) * 3 + (i % 9) / 3
						== ((n / 9) / 3) * 3 + (n % 9) / 3)))
			return (ERROR);
		i++;
	}
	return (OK);
}

int		valid_all(char *s)
{
	int	i;

	i = 0;
	while (i < ARRSIZE)
		if (!valid_char(s, i++))
			return (ERROR);
	return (OK);
}

char	*sudo_copy(char *input)
{
	char	*out;
	int		i;

	if ((out = (char *)malloc(ARRSIZE * sizeof(char))))
	{
		i = 0;
		while (i < ARRSIZE)
		{
			out[i] = input[i];
			i++;
		}
	}
	return (out);
}

void	print_sudoku(char *input)
{
	int	i;
	
	i = 0;
	while (i < ARRSIZE)
	{
		ft_putchar(input[i]);
		ft_putchar((i + 1) % 9 == 0 ? '\n' : ' ');
		i++;
	}
	return ;
}

char	*solve_up(char *input)
{
	int		i;
	char	*cp;
	char	c;
	char	*res;

	if ((cp = sudo_copy(input)) == NULL)
		return (ERROR);
	i = 0;
	while (cp[i] != '.' && i < ARRSIZE)
		i++;
	if (i == ARRSIZE)
		return (cp);
	c = '1';
	while (c <= '9')
	{
		cp[i] = c;
		if (!valid_char(cp, i) || (res = solve_up(cp)) == NULL)
			c++;
		else
			return (res);
	}
	free (cp);
	return (NULL);
}

char	*solve_down(char *input)
{
	int		i;
	char	*cp;
	char	c;
	char	*res;

	if ((cp = sudo_copy(input)) == NULL)
		return (ERROR);
	i = 0;
	while (cp[i] != '.' && i < ARRSIZE)
		i++;
	if (i == ARRSIZE)
		return (cp);
	c = '9';
	while (c >= '1')
	{
		cp[i] = c;
		if (!valid_char(cp, i) || (res = solve_down(cp)) == NULL)
			c--;
		else
			return (res);
	}
	free (cp);
	return (NULL);
}

int		main(int ac, char **av)
{
	char 	*s;
	char	*up;
	char	*down;

	if ((s = (char *)malloc(ARRSIZE * sizeof(char))) == NULL)
		ft_putstr("Erreur\n");
	else if (!valid_size(ac, av) || !copy_input(av, s) || !valid_all(s))
		ft_putstr("Erreur\n");
	else if ((up = solve_up(s)) == NULL)
		ft_putstr("Erreur\n");
	else if (ft_strncmp(up, (down = solve_down(s)), ARRSIZE) != 0)
		ft_putstr("Erreur\n");
	else
	{
		print_sudoku(down);
	}
	return (0);
}
