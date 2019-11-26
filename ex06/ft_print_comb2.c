/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 21:09:30 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/26 08:21:20 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_numbers(int first, int second);
void print_int(int integer);
void print_char(char character);

void	ft_print_comb2(void)
{
	print_numbers(0, 1);
}

void	print_numbers(int first, int second)
{
	print_int(first);
	write(1, " ", 1);
	print_int(second);
	if (second < 99)
	{
		write(1, ", ", 2);
		second++;
		print_numbers(first, second);
	}
	else if (first < 98)
	{
		write(1, ", ", 2);
		first++;
		print_numbers(first, first + 1);
	}
}

void	print_int(int integer)
{
	print_char('0' + integer / 10);
	print_char('0' + integer % 10);
}

void	print_char(char character)
{
	write(1, &character, 1);
}
