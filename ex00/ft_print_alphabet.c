/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:27:22 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/13 09:46:24 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


void ft_putchar( char c)
{
	write(1, &c, 1);

void ft_print_alphabet(void)
{
	char b;

	b='a';
	while (b<='z')
	{
		ft_putchar(b);
		b-=-1;
	}
}
int main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
