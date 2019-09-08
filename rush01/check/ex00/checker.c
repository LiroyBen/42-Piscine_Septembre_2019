/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:05:45 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/08 22:03:41 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*checkerint(char *str)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' && str[i] != ' ')
			return ("Error \n");
		if ((a == 1 && e == 1) || (b == 1 && f == 1) || (c == 1 && g == 1) || (d == 1 && h == 1))
			return ("Error  \n");
		if ((a == 2 && e == 2) || (b == 2 && f == 2) || (c == 2 && g == 2) || (d == 2 && h == 2))
			return ("Error  \n");
		else if ((a == 3 && e == 3) || (b == 3 && f == 3) || (c == 3 && g == 3) || (d == 3 && h == 3))
			return ("Error  \n");
		else if ((a == 4 && e == 4) || (b == 4 && f == 4) || (c == 4 && g == 4) || (d == 4 && h == 4))
			return ("Error  \n");
	}
	return ("solver.c");
	i++;
}

int		main(void)
{
	char str[] = "0";
	printf("%s", checkerint(str));
}
