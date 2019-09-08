/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:23:33 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/06 14:16:14 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		conditions(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i > 0 && (!(conditions(str[i - 1]))))
			{
				str[i] -= 'a' - 'A';
			}
			else if (i == 0)
			{
				str[i] -= 'a' - 'A';
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 'A' - 'a';
		}
		i++;
	}
	return (str);
}
