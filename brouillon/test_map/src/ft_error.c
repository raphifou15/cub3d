/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:34:01 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/03 17:42:10 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_error(int err)
{
	if (err == 0)
		ft_putstr("Error\nNombre d'arguments incorrecte\n");
	if (err == 1)
		ft_putstr("Error\nL'argument passé n'est pas bon ««.cub»»\n");
	if (err == 2)
		ft_putstr("Error\nL'argument passé n'est pas bon ««--save»»\n");
	if (err == 3)
		ft_putstr("Error\nMalloc map_init a échoué\n");
	if (err == 4)
		ft_putstr("Error\nMauvais fichier\nLa fonction open a échoué, map\n");
	if (err == 5)
		ft_putstr("Error\nLa fonction close à échoué, pour la map\n");
	if (err == 6)
		ft_putstr("Error\nTrop d'utilisation de résolution\n");
	if (err == 7)
		ft_putstr("Error\nMauvaise valeur entrée dans résolution\n");
	if (err == 8)
		ft_putstr("Error\nResolution trop petite pour ouvrir une fenêtre\n");
	if (err == 9)
		ft_putstr("Error\nMalloc a échoué ft_modif_strcpy, north_texture\n");
	if (err == 10)
		ft_putstr("Error\nTrop d'utilisation de north texture\n");
	if (err == 11)
		ft_putstr("Error\nOpen a échoué fichier texture north est mauvais\n");
	return (0);
}
