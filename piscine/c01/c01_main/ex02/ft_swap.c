/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:30:25 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/02 22:04:55 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main()
{
	int a = 5;
	int b = 25;

	int *ptra = &a;
	int *ptrb = &b;

	printf("a = %d | b = %d", a, b);
	ft_swap(ptra, ptrb);
	printf("\na = %d | b = %d", a, b);
}
