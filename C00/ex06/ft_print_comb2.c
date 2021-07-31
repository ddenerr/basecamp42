#include <unistd.h>

void	print_number(int n);

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 00;
	num[1] = 01;
	while (num[0] <= 98)
	{
		while (num[1] <= 99)
		{
			print_number(num[0]);
			write (1, " ", 1);
			print_number(num[1]);
			if (num[1] != 99 || num[0] != 98)
				write (1, ", ", 2);
			num[1]++;
		}
		num[0]++;
		num[1] = num[0] + 1;
	}
}

void	print_number(int n)
{
	char	ten;
	char	unity;

	ten = '0';
	unity = '0';
	ten += n / 10;
	unity += n % 10;
	write (1, &ten, 1);
	write (1, &unity, 1);
}
