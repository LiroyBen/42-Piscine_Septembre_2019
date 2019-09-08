/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 21:05:57 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/01 21:16:19 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int rest, int quotient)
{
	ft_putchar(quotient + '0');
	ft_putchar(rest + '0');
}

void	fin(int a, int b)
{
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int reste;
	int quotient;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b < 100)
		{
			quotient = a / 10;
			reste = a % 10;
			display(reste, quotient);
			quotient = b / 10;
			reste = b % 10;
			ft_putchar(32);
			display(reste, quotient);
			fin(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
