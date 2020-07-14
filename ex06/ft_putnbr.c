/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:56:55 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/14 11:29:26 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	char* c_nb = (char)nb;
	int i = 0;
	while(c_nb[i] != '\0')
	{
		ft_putchar(c_nb[i]);
		i++;
	}
}

int main()
{
	ft_putnbr(42);
	return (0);
}
