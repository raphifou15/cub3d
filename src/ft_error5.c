/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:42:23 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:54:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_error5(int err)
{
	if (err == 48)
		ft_putstr("Error\nmlx_init n'a pas fonctionné fichier ft_cub3d\n");
	if (err == 49)
		ft_putstr("Error\nL'init d'une image a échoué fichier init_texture\n");
	if (err == 50)
		ft_putstr("Error\nmlx_new_window a échoué fichier ft_cub3d.h\n");
	if (err == 51)
	{
		ft_putstr("Error\nl'init de l'image de la fenêtre a échoué ");
		ft_putstr("fichier next_frame\n");
	}
	if (err == 52)
		ft_putstr("Error\n malloc de ft_list_push_front a échoué\n");
	if (err == 53)
		ft_putstr("Error\n le fichier n'a pas pus etre créé\n");
	if (err == 54)
		ft_putstr("Error\n le fichier n'a pas était bien fermé\n");
}
