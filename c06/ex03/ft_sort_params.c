#include <unistd.h>
void	ft_print_argv(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != 0)
		{
			ft_print_argv(argv[j][i]);
			++i;
		}
		argv[j][i] = 0;
		write(1, "\n", 1);
		++j;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while ((*p1) && *p1 == *p2)
	{
		++p1;
		++p2;
	}
	return (*p1 - *p2);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

void	ft_sort_int_tab(int *tab, int size)
{
	char	*temporary;
	char	*arg1;
	char	*arg2;
	int	i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp() > 0)
			{
				temporary = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temporary;
			}
			++j;
		}
		++i;
	}
}
