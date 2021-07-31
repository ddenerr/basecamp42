#include <unistd.h>

void	ft_print_numbers(void)
{
	char	character;

	character = '0';
	while (character <= '9')
	{
		write (1, &character, 1);
		character++;
	}
}
