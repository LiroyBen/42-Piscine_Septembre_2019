/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 11:44:51 by lbenaim           #+#    #+#             */
/*   Updated: 2019/08/31 17:29:43 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	nul_la_norminette(char pn, char sn, char tn)
{
	ft_putchar(pn);
	ft_putchar(sn);
	ft_putchar(tn);
}

void	ft_print_comb(void)
{
	char pn;
	char sn;
	char tn;

	pn = '0' - 1;
	while (pn < '7')
	{
		pn++;
		sn = pn;
		while (sn < '8')
		{
			sn++;
			tn = sn;
			while (tn < '9')
			{
				tn++;
				nul_la_norminette(pn, sn, tn);
				if ((pn != '7') || (sn != '8') || (tn != '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
