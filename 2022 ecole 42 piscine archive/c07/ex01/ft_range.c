#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*res;

	if (min >= max)
		return (0);
	res = malloc(sizeof(int) * (max - min));
	if (!res)
		return (0);
	i = 0;
	while (i + min < max)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
