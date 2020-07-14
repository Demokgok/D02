/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:27:22 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/14 07:46:23 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

//int  ft_putchar( char c)
//{
	write(1, &c, 1);
	return (0);
//}

//void ft_print_alphabet(void)
{
	char a;

	a='a';
	while (a<='z')
	{
		ft_putchar(a);
		a++;
	}

	ft_putchar ('\n');
}
int main()
{
	ft_print_alphabet();
	return (0);
}
