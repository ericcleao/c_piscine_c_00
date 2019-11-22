/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 21:11:23 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/21 21:11:25 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char character);

void	ft_putnbr(int nb)
{
	if (nb != 0)
	{
		ft_putnbr(nb / 10);
		print_char('0' + nb % 10);
	}
}

void	print_char(char character)
{
	write(1, &character, 1);
}