#include <stdio.h>



int		match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	if (s2[0] != '*')
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '*')
			i++;
		if (s1[i] != s2[i] && s2[i] != '*')
			return (0);
		return (s2[i] == '\0' ? 1 : match(s1 + i, s2 + i));
	}
	while (s2[0] == '*')
		s2++;
	if (s2[0] == '\0')
		return (1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j] != '\0' && s2[j] != '*')
			j++;
		if (s2[j] == '*' || s2[j] == '\0')
			return (match(s1 + i + j, s2 + j));
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", match(av[1], av[2]));
	return (0);
}
