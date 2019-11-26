/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 21:11:23 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/26 14:14:59 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char character);

void	ft_putnbr(int nb)
{
	char current_digit;

	current_digit = '0' + nb % 10;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	else if (nb < 0)
	{
		print_char('-');
		ft_putnbr((nb / 10) * -1);
		current_digit = '0' + ((nb % 10) * -1);
	}
	print_char(current_digit);
}

void	print_char(char character)
{
	write(1, &character, 1);
}
