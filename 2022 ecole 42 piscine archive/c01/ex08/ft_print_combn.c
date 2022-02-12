#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	temp;
	int	last;

	index = 0;
	while (index != size)
	{
		last = 0;
		while (last != size)
		{
			if (tab[last] > tab[last + 1])
			{
				temp = tab[last];
				tab[last] = tab[last + 1];
				tab[last + 1] = temp;
			}
			last++;
		}
		index++;
	}
}
