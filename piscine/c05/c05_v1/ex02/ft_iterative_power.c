/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:24:43 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/14 13:54:17 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int resultat;

	resultat = 1;
	if ((power <= 0) || (nb == 0))
	{
		return (0);
	}
	while (power > 0)
	{
		resultat = nb * resultat;
		power--;
	}
	return (resultat);
}
