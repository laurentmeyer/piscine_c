#include <stdlib.h>
#include "ft_colles.h"

void	ft_putchar(char	c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


char	ft_colle00_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1)
		i = '-';
	if (c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = '|';
	if (c == 0 || c == cols - 1 || c == (cols + 1) * (lines - 1)
		|| c == (cols + 1) * lines - 2)
		i = 'o';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}


char	ft_colle01_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = '*';
	if (c == (cols + 1) * lines - 2)
		i = '/';
	if (c == cols - 1 || c == (cols + 1) * (lines - 1))
		i = '\\';
	if (c == 0)
		i = '/';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}


char	ft_colle02_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = 'B';
	if (c == (cols + 1) * (lines - 1) || c == (cols + 1) * lines - 2)
		i = 'C';
	if (c == 0 || c == cols - 1)
		i = 'A';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}


char	ft_colle03_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = 'B';
	if (c == cols - 1 || c == (cols + 1) * lines - 2)
		i = 'C';
	if (c == 0 || c == (cols + 1) * (lines - 1))
		i = 'A';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}


char	ft_colle04_chars(int c, int cols, int lines)
{
	char i;

	i = ' ';
	if (c / (cols + 1) == 0 || c / (cols + 1) == lines - 1 ||
			c % (cols + 1) == 0 || c % (cols + 1) == cols - 1)
		i = 'B';
	if (c == (cols + 1) * lines - 2)
		i = 'A';
	if (c == cols - 1 || c == (cols + 1) * (lines - 1))
		i = 'C';
	if (c == 0)
		i = 'A';
	if (c % (cols + 1) == cols)
		i = '\n';
	return (i);
}

typedef char (*func)(int, int, int);

func	ft_what_colle(int i)
{

	if (i == 0)
		return (&ft_colle00_chars);
	if (i == 1)
		return (&ft_colle01_chars);
	if (i == 2)
		return (&ft_colle02_chars);
	if (i == 3)
		return (&ft_colle03_chars);
	if (i == 4)
		return (&ft_colle04_chars);
	else
		return (0);
}



char	*ft_colle0X(int cols, int lines, int colle)
{
	int		i;
	int		j;
	int		c;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(((cols + 1) * lines + 1) * sizeof(char));
	while (i < lines)
	{
		while (j < cols + 1)
		{
			c = i * (cols + 1) + j;
			*(str + c) = (*(ft_what_colle(colle)))(c, cols, lines);
			j++;
		}
		i++;
		j = 0;
	}
	*(str + lines * (cols + 1)) = '\0';
	return (str);
}

void	colle(int x, int y)
{
	if (y < 1 || x < 1)
		return ;
	ft_putstr(ft_colle0X(x, y, 4));
	return ;
}
