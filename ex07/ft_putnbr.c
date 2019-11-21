#include <unistd.h>

void print_char(char);

void ft_putnbr(int nb)
{
	if(nb != 0)
	{
		ft_putnbr(nb/10);
		print_char('0' + nb%10);
	}
}

void print_char(char value)
{
	write(1, &value, 1);
}
