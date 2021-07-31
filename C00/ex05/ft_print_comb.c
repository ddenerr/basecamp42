#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '2';
	while (comb[0] <= '7')
	{
		while (comb[1] <= '8')
		{
			while (comb[2] <= '9')
			{
				write (1, &comb, 3);
				if (comb[0] != '7' || comb[1] != '8' || comb[2] != '9')
					write (1, ", ", 2);
				comb[2]++;
			}
			comb[1]++;
			comb[2] = comb[1] + 1;
		}
		comb[0]++;
		comb[1] = comb[0] + 1;
		comb[2] = comb[1] + 1;
	}
}
