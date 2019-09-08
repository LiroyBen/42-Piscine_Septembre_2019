/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:34:14 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/05 18:17:41 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int avance;

	avance = 0;
	while (src[avance] != '\0')
	{
		dest[avance] = src[avance];
		avance++;
	}
	dest[avance] = '\0';
	return (dest);
}
