/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:28:39 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/03 15:51:09 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int resultat;
	int reste;

	resultat = *a / *b;
	reste = *a % *b;
	*a = resultat;
	*b = reste;
}

int main ()
{
	int *a;
	int *b;
	int c = 10;
	int d = 5;
	a = &c;
	b = &d;

	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
