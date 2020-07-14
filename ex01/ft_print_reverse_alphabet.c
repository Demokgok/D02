/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:49:09 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/14 08:05:46 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)

{
	char a;

	a = 'z';
	while (a >= 'a')
	
	{
		ft_putchar(a);
		a--;
	}
}

int main(void)

{
	ft_print_reverse_alphabet();
	return (0);
}
