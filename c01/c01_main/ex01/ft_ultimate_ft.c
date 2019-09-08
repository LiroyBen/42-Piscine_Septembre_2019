/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:58:29 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/02 20:53:58 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int		main()
{
	int a = 0;
	int *ptr = &a;
	int **ptrr = &ptr;
	int ***ptrrr = &ptrr;
	int ****ptrrrr = &ptrrr;
	int *****ptrrrrr = &ptrrrr;
	int ******ptrc = &ptrrrrr;
	int *******ptrrc = &ptrc;
	int ********ptre = &ptrrc;
	int *********pto = &ptre;
	
	ft_ultimate_ft(pto);
	printf("%d\n", a);
}
