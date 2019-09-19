/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:58:14 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/01 21:17:26 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int rest;

	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	rest = nb % 10;
	nb = nb / 10;
	if (nb == 0)
	{
		ft_putchar(rest + '0');
	}
	else
	{
		ft_putnbr(nb);
		ft_putchar(rest + '0');
	}
}
