/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:10:15 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/14 08:18:10 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char a;
	a = '1';
	while(a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}

int main(void)
{
	ft_print_numbers();
	return (0);
}
