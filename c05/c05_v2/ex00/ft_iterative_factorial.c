/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:44:06 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/14 15:38:23 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int multiple;

	multiple = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= 1)
	{
		multiple = multiple * nb;
		nb--;
	}
	return (multiple);
}
