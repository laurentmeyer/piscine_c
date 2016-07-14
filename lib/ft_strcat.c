#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

char	*ft_strcat(char *stra, char *strb)
{
	char	*dest;
	if (stra == 0 && strb == 0)
		return 0;
	if (stra == 0)
		return (ft_strdup(strb));
	if (strb == 0)
		return (ft_strdup(stra));
	dest = (char *)malloc(ft_strlen(stra) + ft_strlen(strb) + 1);
	ft_strcpy(dest, stra);
	ft_strcpy(dest + ft_strlen(stra), strb);
	*(dest + ft_strlen(stra) + ft_strlen(strb) + 1) = '\0';
	return (dest);
}
