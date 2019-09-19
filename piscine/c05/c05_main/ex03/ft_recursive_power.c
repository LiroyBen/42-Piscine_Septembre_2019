/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:04:19 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/13 15:42:12 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
	return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (1);
	}
}

int main()
{
	printf("%d", ft_recursive_power(2, 6));
}
