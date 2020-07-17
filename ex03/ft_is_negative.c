
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:22:28 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/13 11:29:06 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar ('N');
	}
	else if (n > 0)
	{
		ft_putchar ('P');
	}
}
				
