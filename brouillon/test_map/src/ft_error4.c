/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:48:00 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 16:56:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_error4(int err)
{
	if (err == 36)
		ft_putstr("Error\nCouleur doit être en dessous de 256\n");
	if (err == 37)
		ft_putstr("Error\nCouleur doit être au dessus ou égal a 0 \n");
	if (err == 38)
		ft_putstr("Error\nTrop d'utilisation de c_color\n");
	if (err == 39)
		ft_putstr("Error\nMauvais élément dans c_color\nex: C nbr,nbr,nbr\n");
	if (err == 40)
		ft_putstr("Error\nMauvaise valeur dans la carte\n");
	if (err == 41)
		ft_putstr("Error\nLa ligne d'une map ne doit pas finnir par 1\n");
	if (err == 42)
		ft_putstr("Error\nLa map peut seulement contennir 0 1 2 S N W E\n");
	if (err == 43)
		ft_putstr("Error\nIl doit y avoir un seul W N S ou E dans la map\n");
	if (err == 44)
		ft_putstr("Error\nget_next_line renvoie -1\n");
	if (err == 45)
		ft_putstr("Error\nManque d'élément pour créer la map\n");
	if (err == 46)
		ft_putstr("Error\nft_split2 à échoué\n");
	if (err == 47)
		ft_putstr("Error\nLa map n'est pas bien entourré de 1\n");
	return (0);
}
