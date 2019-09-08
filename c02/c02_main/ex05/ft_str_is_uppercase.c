/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:43:32 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/04 22:53:43 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z')))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main()
{
	char str[] = "a";
	printf("%d", ft_str_is_uppercase(str));
}
