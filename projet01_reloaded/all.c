#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (s2[0] == '*' && s2[1] == '\0')
		return (1);
	else if (s1[0] == '\0' || s2[0] == '\0')
		return ((s1[0] == s2[0]) ? 1 : 0);
	else if (s1[0] == s2[0])
		return (match(s1 + 1, s2 + 1));
	else if (s2[0] == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else
		return (0);
}

int		nmatch(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == s2[0])
		return (nmatch(s1 + 1, s2 + 1));
	if (s2[0] == '*' && s1[0] == '\0')
		return (nmatch(s1, s2 + 1));
	if (s2[0] == '*' && s1[0] != '\0')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", nmatch(av[1], av[2]));
	return (0);
}
