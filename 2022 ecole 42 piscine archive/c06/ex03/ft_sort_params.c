#include <unistd.h>

static int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char *a[], char *b[])
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	too_many_lines(int *i)
{
	write(1, "\n", 1);
	*i += 1;
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 2;
	while (i < argc)
	{
		if (i > 1)
		{
			if (ft_strcmp(argv[i], argv[i - 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i - 1]);
				i -= 2;
			}
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		too_many_lines(&i);
	}
}
