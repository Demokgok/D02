/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:44:22 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/17 17:11:44 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb(void)
{
	char a ='0';
	char b = '0';

	while (a <='9')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				ft_putchar (a);
				ft_putchar (b);
			}
			b++;
		}
		a++;
	}
}


