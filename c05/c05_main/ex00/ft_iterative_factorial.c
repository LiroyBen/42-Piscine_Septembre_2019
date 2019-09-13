/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:44:06 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/13 14:10:45 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int multiple;

	multiple = 1;
	if ((nb < 0) || (nb > 12))
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

int main()
{
	printf("%d", ft_iterative_factorial(3));
	return (0);
}
