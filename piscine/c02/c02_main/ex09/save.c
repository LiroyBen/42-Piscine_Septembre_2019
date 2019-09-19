/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:23:33 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/05 15:51:23 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	if(str[i] >= 'a' && str[i] <= 'a')
		str[i] = str[i] - 32;
	i = 1;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' '))
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return(str);
}

int main()
{
	char str[] = "aB ca";
	printf("%s", ft_strcapitalize(str));
}


