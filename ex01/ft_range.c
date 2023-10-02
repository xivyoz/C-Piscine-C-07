#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tableau;
	int	count;

	count = 0;
	if (min >= max)
		return (NULL);
	tableau = malloc(sizeof(int) * (max - min));
	while (count != max - 1)
	{
		tableau[count] = min + count;
		count++;
	}
	return (tableau);
}
