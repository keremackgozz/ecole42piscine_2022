#include	"ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ret;

	i = 0;
	i = ft_strlen(src) + 1;
	ret = malloc(sizeof(char) * i);
	if (ret == 0)
		return (ret);
	i = 0;
	while (src[i] != 0)
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*st;
	int			i;

	st = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 2));
	if (st == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		st[i].size = ft_strlen(av[i]);
		st[i].copy = ft_strdup(av[i]);
		st[i].str = av[i];
		i++;
	}
	st[i].size = 0;
	st[i].copy = NULL;
	st[i].str = NULL;
	return (st);
}
