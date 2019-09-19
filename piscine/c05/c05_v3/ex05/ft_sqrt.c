/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:54:10 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/14 18:03:34 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int n;

	n = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (n <= nb / n)
	{
		if ((n * n) == nb)
			return (n);
		n++;
	}
	return (0);
}
