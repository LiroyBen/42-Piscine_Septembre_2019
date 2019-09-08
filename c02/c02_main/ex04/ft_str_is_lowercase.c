/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:32:31 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/04 22:45:16 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'a' && str[i] <= 'z')))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int main ()
{
	char str[] = "";
	printf("%d", ft_str_is_lowercase(str));
}
