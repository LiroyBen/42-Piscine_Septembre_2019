/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:05:45 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/08 16:47:39 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


char  *checkerint(char *str)
{
	int a;
	int b;
	int c;
	int d;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' && str[i] != ' ')
		{
		return("Error \n");
		}
		if (
		i++;
	}
	return("TEST");
}

int main(void)
{
	char str[] = "0";
	printf("%s", checkerint(str));
}

