#include <stdio.h>

int		ft_count_occurences(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != to_find[0] && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (0);
	j = 0;
	while (str[i + j] == to_find[j])
	{
		if (to_find[j] == '\0' && str[i + j] == '\0')
			return(1);
		j ++;
	}
	if (to_find[j] == '\0')
		return (1 + ft_count_occurences(str + i + 1, to_find));
	return (ft_count_occurences(str + i + 1, to_find));
}

char	*ft_strrange(char *str, int min, int max)
{
	
}


int main (void)
{
	printf("%d\n", ft_count_occurences("lololol", "lol"));
	return (0);
}

