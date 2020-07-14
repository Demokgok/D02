/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:31:35 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/14 09:07:49 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb(void)
{
	char a='0';
	char b='0';
	char c='0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
		{
			if (a < b && b < c)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			}
			c++;
		}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int main()
{
	ft_print_comb();
	return (0);
}
