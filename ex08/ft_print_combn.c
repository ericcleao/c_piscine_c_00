/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 08:50:24 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/26 10:36:36 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	update_current_number(int *digits, int size);
void	init_int_array(int *array, int size);
void	print_int_array(int *array, int size);
void	print_char(char character);

void	ft_print_combn(int n)
{
	int digits[n];
	int cursor;
	int i;

	init_int_array(digits, n);
	print_int_array(digits, n);
	cursor = n - 1;
	i = 0;
	while (digits[0] < 10 - n)
	{
		update_current_number(digits, n);
		print_int_array(digits, n);
		i++;
	}
}

void	update_current_number(int *digits, int size)
{
	int cursor;

	cursor = size - 1;
	while (digits[cursor] >= ((10 + cursor) - size) && cursor >= 0)
	{
		cursor--;
	}
	if (cursor != -1)
	{
		digits[cursor]++;
		cursor++;
		while (cursor < size)
		{
			digits[cursor] = digits[cursor - 1] + 1;
			cursor++;
		}
		print_char(',');
		print_char(' ');
	}
}

void	init_int_array(int *array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		array[i] = i;
		i++;
	}
}

void	print_int_array(int *array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		print_char(array[i] + '0');
		i++;
	}
}

void	print_char(char character)
{
	write(1, &character, 1);
}
