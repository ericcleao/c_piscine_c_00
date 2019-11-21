#include <unistd.h>

void print_numbers(int, int);
void print_int(int);
void print_char(char);

void ft_print_comb2(void)
{
	print_numbers(0, 0);
}

void print_numbers(int first, int second)
{
	print_int(first);
	write(1, " ", 1);
	print_int(second);

	if(second < 99)
	{
		write(1, ", ", 2);
		second++;
		print_numbers(first, second);
	}
	else if(first < 98)
	{
		write(1, ", ", 2);
		first++;
		print_numbers(first, first+1);
	}
}

void print_int(int value)
{
	if(value >= 10)
	{
		print_char('0' + value/10);
		print_char('0' + value%10);
	}
	else if(value >= 0)
	{
		write(1, "0", 1);
		print_char('0' + value);
	}
}

void print_char(char value)
{
	write(1, &value, 1);
}
