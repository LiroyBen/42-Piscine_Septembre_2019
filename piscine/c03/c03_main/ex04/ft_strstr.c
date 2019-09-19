/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:24:04 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/09 16:44:37 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
			{
				return(&str[i]);
			}
		}
		i++;
	}
	return(0);
}

int main()
{
	char str[] = "test ca labas";
	char to_find[] = "ca";
	printf("%s", ft_strstr(str, to_find));
}
