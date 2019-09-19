/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 17:37:37 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/04 14:59:53 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int compteur;
	int tmp;
	int taille;

	taille = size - 1;
	compteur = 0;
	while (compteur < taille)
	{
		tmp = tab[compteur];
		tab[compteur] = tab[taille];
		tab[taille] = tmp;
		compteur++;
		taille--;
	}
}
