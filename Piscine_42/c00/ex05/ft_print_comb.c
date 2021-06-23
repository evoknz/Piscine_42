#include<unistd.h>
void	print_ijk(char i, char j, char k);

void ft_print_comb(void)
{
		char	i;
		char	j;
		char	k;

		i = '0';
		j = '1';
		k = '2';
		while (i <= '7')
		{
				while (j <= '8')
				{
						while (k <= '9')
						{
								if (i != j && i != k && k !=l 
										print_ijk (i, j, k);
									k++;
						}
								j++;
								k = j + 1;
				}
							i++;
							j = i + 1;
			}
			print_ijk(i-1, j-1, k-1);
}

void	print_ijk(char i, char j, char k)
{
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, &k, 1);
		if (i != '7' || j != '8' || k != '9')
				write(1, ", ", 2);
}

