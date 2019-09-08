/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:34:14 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/05 16:17:40 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int avance;

	while (src[avance] != '\0')
	{
		dest[avance] = src[avance];
		avance++;
	}
	dest[avance];
	return (avance);
}
