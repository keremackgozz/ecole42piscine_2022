#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (0 != *str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_neg(int *bn, int *n_flag)
{
	if (0 > *bn)
		*n_flag = -1;
	else
		*n_flag = 1;
}

void	ft_putnbr(int bn)
{
	char	number[20];
	int		n_flag;
	int		i;

	if (0 == bn)
	{
		ft_putchar('0');
		return ;
	}
	ft_neg(&bn, &n_flag);
	i = 19;
	while (bn != 0)
	{
		number[i] = bn % 10 * n_flag;
		bn /= 10;
		i--;
	}
	i++;
	if (n_flag == -1)
		ft_putchar('-');
	while (19 >= i)
	{
		ft_putchar(number[i] + '0');
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
