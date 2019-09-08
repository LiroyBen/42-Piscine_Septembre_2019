/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:23:16 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/03 20:52:15 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int compteur;
	int tempo;

	compteur = 1;
	while (compteur < size)
	{
		if (tab[compteur] < tab[compteur - 1])
		{
			tempo = tab[compteur];
			tab[compteur] = tab[compteur - 1];
			tab[compteur - 1] = tempo;
			compteur = 0;
		}
		compteur++;
	}
}
