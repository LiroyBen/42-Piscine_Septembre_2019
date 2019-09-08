/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:49:05 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/05 12:56:31 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
	unsigned int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 'A' - 'a';
		}
		i++;
	}
	return(str);
}

int main()
{
	char str[] = "Fdgdfgd454";
	printf("%s", ft_strlowcase(str));
}
