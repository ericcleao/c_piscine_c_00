#include <unistd.h>

void print_numbers(int, int, int);
void print_char(char);

void ft_print_comb(void)
{
	print_numbers(0, 1, 2);
}

void print_numbers(int first, int second, int third)
{
	print_char('0' + first);
	print_char('0' + second);
	print_char('0' + third);

	if(third < 9)
	{
		write(1, ", ", 2);
		third++;
		print_numbers(first, second, third);
	}
	else if(second < 8)
	{
		write(1, ", ", 2);
		second++;
		print_numbers(first, second, second+1);
	}
	else if(first < 7)
	{
		write(1, ", ", 2);
		first++;
		print_numbers(first, first+1, first+2);
	}
}

void print_char(char value)
{
	write(1, &value, 1);
}
