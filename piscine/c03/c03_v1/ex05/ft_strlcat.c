/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:16:22 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/09 20:16:54 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int n;
	unsigned int a;

	i = 0;
	n = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && a < size)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	while (src[a] != '\0')
	{
		a++;
	}
	return (a + size);
}
