#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	nb;

	count = 0;
	nb = (max - min);
	if (min >= max)
		return (0);
	range[0] = malloc(sizeof(int) * (max - min) + 1);
	if (range[0] == NULL)
		return (-1);
	count = 0;
	while (count < nb)
	{
		range[0][count] = min + count;
		count++;
	}
	range[0][count] = '\0';
	return (max - min);
}
