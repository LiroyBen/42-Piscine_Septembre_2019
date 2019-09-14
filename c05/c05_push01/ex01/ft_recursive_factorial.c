/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:11:37 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/14 13:53:05 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int multiple;

	multiple = 1;
	if ((nb == 1) || (nb == 0))
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
