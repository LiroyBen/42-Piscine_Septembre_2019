/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:54:59 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/04 23:19:38 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 33 && str[i] <= 126)))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main()
{
	char *str;
	int i;
	i = 0;
	str[0] = 10;

	printf("%d", ft_str_is_printable(str));
}
