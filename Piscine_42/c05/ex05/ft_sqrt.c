#include <unistd.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i < (unsigned int)nb)
	{
		i++;
	}
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
