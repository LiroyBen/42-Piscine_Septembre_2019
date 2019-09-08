/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:37:55 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/06 13:05:19 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int i;
	
	i = 0;
	while  (s1[i] == s2[i] && i < n)
	{
		i++;
		if (i == n)
		{
			return(0);
		}
	}
		return (s1[i] - s2[i]);
}

int main()
{
	char s1[] = "4554 ";
	char s2[] = "45547";
	printf("%d", ft_strncmp(s1, s2, 5));
}
