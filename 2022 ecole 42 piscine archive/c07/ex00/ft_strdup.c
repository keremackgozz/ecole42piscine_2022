#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	i = -1;
	res = malloc(sizeof(*src));
	if (res == 0)
		return (0);
	while (src[++i] != '\0')
		res[i] = src[i];
	res[i] = '\0';
	return (res);
}
