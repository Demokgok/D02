/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:56:55 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/17 17:12:51 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		 ft_putchar(' -');
	   nbr *= -1;
	}
	if (nbr < 10)
{
	ft_putchar(nbr + '0');
}
else
{
	ft_putnbr(nbr % 10);
	ft_putnbr(nbr / 10);

	}
}

