/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:44:22 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/13 11:53:55 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_comb(void)
{
	char a ='0';
	char b = '0';

	while (a < ='9')
	{
		while (b < = '9')
		{
			if (a<b)
			{
				print_digits (a,b);
			}
			b++;
		}
		a++;
	}
}