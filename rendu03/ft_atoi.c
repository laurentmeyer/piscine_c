#include <stdio.h>

int		ft_check_str_of_int(char *str)
{
	int i;

	if (*str == '-' && *(str + 1) >= '0' && *(str + 1) <= '9' && ft_check_str_of_int(str + 1) == 1)
		return (-ft_check_str_of_int(str + 1));
	else
	{
		i = 0;
		while (*(str + i) != '\0')
		{
			if (*(str + i) < '0' || *(str + i) > '9')
				return (0);
			i++;
		}
		return (1);
	}	
}


int		ft_atoi(char *str)
{
	int i;
	int acc;

	i = 0;
	acc = 0;
	if (ft_check_str_of_int(str) == 0)
		return (0);
	if (ft_check_str_of_int(str) == -1)
		return (- ft_atoi(str + 1));
	while (*(str + i) != '\0')
	{
		acc = 10 * acc + *(str + i) - '0';
		i++;
	}
	return (acc);
}

int		main(void)
{
	char *str;

	str = "455643";
	printf("%d\n", ft_atoi(str));
	return (0);
}
