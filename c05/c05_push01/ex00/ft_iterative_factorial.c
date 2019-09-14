/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:44:06 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/14 13:52:03 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int multiple;

	multiple = 1;
	while (nb >= 1)
	{
		multiple = multiple * nb;
		nb--;
	}
	return (multiple);
}
