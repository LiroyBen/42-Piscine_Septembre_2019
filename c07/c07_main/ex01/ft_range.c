/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:10:43 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/17 15:41:42 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *tableau;
	int i;

	if (min >= max)
		return (NULL);
	tableau = (int*)malloc(sizeof(*tableau) * (max - min));
	i = 0;
	while (min < max)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	return (tableau);
}
